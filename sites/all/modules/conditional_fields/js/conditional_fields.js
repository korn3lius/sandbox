(function ($) {

/**
 * Enhancements to states.js.
 */

/**
 * Handle array values.
 * @see http://drupal.org/node/1149078
 */
Drupal.states.Dependent.comparisons['Array'] = function (reference, value) {
  if (value === null || value === undefined) {
    return (reference.length == 0) ? true : false;
  }
  if (reference.length > value.length) {
    return false;
  }
  for (var i in reference) {
    if ($.inArray(reference[i], value) < 0) {
      return false;
    }
  }
  return true;
};

/**
 * Handle Object values.
 */
Drupal.states.Dependent.comparisons['Object'] = function (reference, value) {
  /* Regular expressions are objects with a RegExp property. */
  if (reference.hasOwnProperty('RegExp')) {
    reference = new RegExp(reference.RegExp);
    return this.RegExp(reference, value);
  }
  else {
    return compare(reference, value);
  }
};

/**
 * Focused condition.
 */
Drupal.states.Trigger.states.focused = function(element) {
  element.bind('focus', function () {
    element.trigger({ type: 'state:focused', value: true });
  })
  .bind('blur', function () {
    element.trigger({ type: 'state:focused', value: false });
  });

  Drupal.states.postponed.push($.proxy(function () {
    element.trigger({ type: 'state:focused', value: element.is(':focus') });
  }, window));
};

/**
 * Touched condition.
 */
Drupal.states.Trigger.states.touched = {
  'focus': function(e) {
    return (typeof e === 'undefined' && !this.is(':focus')) ? false : true;
  }
};

/**
 * These are new states and existing states enhanced with configurable options.
 */

$(document).bind('conditionalFieldsState:visible', function(e) {
  if (e.trigger) {
    var animation;
    if (e.effect.effect == 'fade') {
      animation = e.value ? 'In' : 'Out';
    }
    else if (e.effect.effect == 'slide') {
      animation = e.value ? 'Down' : 'Up';
    }
    $(e.target).closest('.form-item, .form-submit, .form-wrapper')[e.effect.effect + animation](e.effect.options.speed);
  }
});

/**
 * Empty/Filled state.
 */
$(document).bind('state:empty', function(e) {});
$(document).bind('conditionalFieldsState:empty', function(e) {
  if (e.trigger) {
    var field = $(e.target).find('input, select, textarea');
    if (e.effect.options.reset) {
      if (typeof oldValue == 'undefined' || field.val() != e.effect.options.value) {
        oldValue = field.val();
      }
      field.val((e.effect.effect == 'fill' ? e.value : !e.value) ? oldValue : e.effect.options.value);
    }
    else {
      if (e.effect.effect == 'fill' && !e.value || e.effect.effect == 'empty' && e.value) {
        field.val(e.effect.options.value);
      }
    }
  }
});

/**
 * Unchanged state. Do nothing.
 */
$(document).bind('state:unchanged', function() {});

Drupal.behaviors.conditionalFields = {
  attach: function (context, settings) {
    // AJAX is not updating settings.conditionalFields correctly.
    var conditionalFields = settings.conditionalFields || Drupal.settings.conditionalFields;
    if (typeof conditionalFields === 'undefined' || typeof conditionalFields.effects === 'undefined') {
      return;
    }
    // Override state change handlers for dependents with special effects.
    $.each($(document).data('events'), function(i, e) {
      if (i.substring(0, 6) == 'state:') {
        var originalHandler = e[0].handler;
        e[0].handler = function(e) {
          var effect = conditionalFields.effects['#' + e.target.id];
          if (typeof effect !== 'undefined') {
            $(e.target).trigger({ type : i.replace('state:', 'conditionalFieldsState:'), trigger : e.trigger, value : e.value, effect : effect });
          }
          else {
            originalHandler(e);
          }
        }
      }
    });
  }
};

})(jQuery);

//add new functionality to timeout

RepeatingOperation = function(op, yieldEveryIteration) {

  //keeps count of how many times we have run heavytask() 
  //before we need to temporally check back with the browser.
  var count = 0;   

  this.step = function() {

    //Each time we run heavytask(), increment the count. When count
    //is bigger than the yieldEveryIteration limit, pass control back 
    //to browser and instruct the browser to immediately call op() so
    //we can pick up where we left off.  Repeat until we are done.
    if (++count >= yieldEveryIteration) {
      count = 0;

      //pass control back to the browser, and in 1 millisecond, 
      //have the browser call the op() function.  
      setTimeout(function() { op(); }, 1, [])

      //The following return statement halts this thread, it gives 
      //the browser a sigh of relief, your long-running javascript
      //loop has ended (even though technically we havn't yet).
      //The browser decides there is no need to alarm the user of
      //an unresponsive javascript process.
      return;
      }
    op();
  };
};

