<?php
/**
 * @file
 * case.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function case_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function case_node_info() {
  $items = array(
    'study' => array(
      'name' => t('Case'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
