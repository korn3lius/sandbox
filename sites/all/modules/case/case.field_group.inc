<?php
/**
 * @file
 * case.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function case_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|node|study|default';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_basic';
  $field_group->data = array(
    'label' => 'Basic info',
    'weight' => '1',
    'children' => array(
      0 => 'field_gender',
      1 => 'field_weight',
      2 => 'field_height',
      3 => 'field_chart_no',
      4 => 'field_id_number',
      5 => 'field_diabetes_type',
      6 => 'field_date_of_birth',
      7 => 'field_join_date',
      8 => 'field_year_of_diagnosed_dm',
      9 => 'field_education2',
      10 => 'field_p1407_case_doctor',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_basic_info|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|node|study|form';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic';
  $field_group->data = array(
    'label' => 'Basic info',
    'weight' => '20',
    'children' => array(
      0 => 'field_chart_no',
      1 => 'field_id_number',
      2 => 'field_date_of_birth',
      3 => 'field_year_of_diagnosed_dm',
      4 => 'title',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic_info|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|study|default';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic_info',
      1 => 'group_risk_factor',
      2 => 'group_past_history',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_basic|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic|node|study|form';
  $field_group->group_name = 'group_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic',
    'weight' => '0',
    'children' => array(
      0 => 'group_basic_info',
      1 => 'group_date_collection',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_basic|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_date_collection|node|study|form';
  $field_group->group_name = 'group_date_collection';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_basic';
  $field_group->data = array(
    'label' => 'P1407',
    'weight' => '21',
    'children' => array(
      0 => 'field_join_date',
      1 => 'field_p1407_case_doctor',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'P1407',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_date_collection|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drugs_tx|node|study|form';
  $field_group->group_name = 'group_drugs_tx';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_0';
  $field_group->data = array(
    'label' => '目前治療',
    'weight' => '33',
    'children' => array(
      0 => 'group_year0_su_summary',
      1 => 'group_year0_metformin',
      2 => 'group_year0_tzd',
      3 => 'group_year0_dpp4',
      4 => 'group_year0_insulin',
      5 => 'group_year0_others',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '目前治療',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_drugs_tx|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drugs_year_0|node|study|default';
  $field_group->group_name = 'group_drugs_year_0';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_year_0';
  $field_group->data = array(
    'label' => 'Drugs',
    'weight' => '14',
    'children' => array(
      0 => 'field_initial_su',
      1 => 'field_initial_metformin',
      2 => 'field_initial_tzd',
      3 => 'field_initial_dpp_4',
      4 => 'field_initial_insulin',
      5 => 'field_initial_others',
      6 => 'year0_amarylm',
      7 => 'year0_euglucon',
      8 => 'year0_diamicron',
      9 => 'year0_glidiab',
      10 => 'year0_glucomet',
      11 => 'year0_actos',
      12 => 'year0_avandia',
      13 => 'year0_actosmet',
      14 => 'year0_avandamet',
      15 => 'year0_januvia',
      16 => 'year0_janumet',
      17 => 'year0_onglyza',
      18 => 'year0_kombiglyze',
      19 => 'year0_galvus',
      20 => 'year0_galvusmet',
      21 => 'year0_byetta',
      22 => 'year0_trajenta',
      23 => 'year0_novorapid',
      24 => 'year0_novomix',
      25 => 'year0_actrapid',
      26 => 'year0_nph',
      27 => 'year0_levemir',
      28 => 'year0_lantus',
      29 => 'year0_humalog',
      30 => 'year0_glufast',
      31 => 'year0_starlix',
      32 => 'year0_novonorm',
      33 => 'year0_amaryl',
      34 => 'year0_glucobay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Drugs',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_drugs_year_0|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drugs_year_1|node|study|default';
  $field_group->group_name = 'group_drugs_year_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_year_1';
  $field_group->data = array(
    'label' => 'Drugs ',
    'weight' => '25',
    'children' => array(
      0 => 'field_year_1_su',
      1 => 'field_year_1_metformin',
      2 => 'field_year_1_tzd',
      3 => 'field_year_1_dpp_4',
      4 => 'field_year_1_insulin',
      5 => 'field_year_1_others',
      6 => 'year1_amaryl',
      7 => 'year1_year1_amaryl_m',
      8 => 'year1_euglucon',
      9 => 'year1_diamicron',
      10 => 'year1_glidiab',
      11 => 'year1_glucomet',
      12 => 'year1_januvia',
      13 => 'year1_janumet',
      14 => 'year1_onglyza',
      15 => 'year1_kombiglyze',
      16 => 'year1_galvus',
      17 => 'year1_galvusmet',
      18 => 'year1_byetta',
      19 => 'year1_trajenta',
      20 => 'year1_novorapid',
      21 => 'year1_novomix',
      22 => 'year1_actrapid',
      23 => 'year1_nph',
      24 => 'year1_levemir',
      25 => 'year1_lantus',
      26 => 'year1_humalog',
      27 => 'year1_glufast',
      28 => 'year1_starlix',
      29 => 'year1_novonorm',
      30 => 'year1_actos',
      31 => 'year1_avandia',
      32 => 'year1_actosmet',
      33 => 'year1_avandamet',
      34 => 'year1_glucobay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Drugs ',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_drugs_year_1|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drugs_year_2|node|study|default';
  $field_group->group_name = 'group_drugs_year_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_year_2';
  $field_group->data = array(
    'label' => 'Drugs ',
    'weight' => '33',
    'children' => array(
      0 => 'field_year_2_su',
      1 => 'field_year_2_metformin',
      2 => 'field_year_2_tzd',
      3 => 'field_year_2_dpp_4',
      4 => 'field_year_2_insulin',
      5 => 'field_year_2_others',
      6 => 'year2_amaryl',
      7 => 'year2_amaryl_m',
      8 => 'year2_euglucon',
      9 => 'year2_diamicron',
      10 => 'year2_glidiab',
      11 => 'year2_glucomet',
      12 => 'year2_actos',
      13 => 'year2_avandia',
      14 => 'year2_actosmet',
      15 => 'year2_avandamet',
      16 => 'year2_januvia',
      17 => 'year2_janumet',
      18 => 'year2_onglyza',
      19 => 'year2_kombiglyze',
      20 => 'year2_galvus',
      21 => 'year2_galvusmet',
      22 => 'year2_byetta',
      23 => 'year2_trajenta',
      24 => 'year2_novorapid',
      25 => 'year2_novomix',
      26 => 'year2_actrapid',
      27 => 'year2_nph',
      28 => 'year2_levemir',
      29 => 'year2_lantus',
      30 => 'year2_humalog',
      31 => 'year2_glufast',
      32 => 'year2_starlix',
      33 => 'year2_novonorm',
      34 => 'year2_glucobay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Drugs ',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_drugs_year_2|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drugs_year_3|node|study|default';
  $field_group->group_name = 'group_drugs_year_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_year_3';
  $field_group->data = array(
    'label' => 'Drugs',
    'weight' => '40',
    'children' => array(
      0 => 'field_year_3_su',
      1 => 'field_year_3_metformin',
      2 => 'field_year_3_tzd',
      3 => 'field_year_3_dpp_4',
      4 => 'field_year_3_insulin',
      5 => 'field_year_3_others',
      6 => 'year3_amaryl',
      7 => 'year3_amaryl_m',
      8 => 'year3_euglucon',
      9 => 'year3_diamicron',
      10 => 'year3_glidiab',
      11 => 'year3_glucomet',
      12 => 'year3_actos',
      13 => 'year3_avandia',
      14 => 'year3_actosmet',
      15 => 'year3_avandamet',
      16 => 'year3_januvia',
      17 => 'year3_janumet',
      18 => 'year3_onglyza',
      19 => 'year3_kombiglyze',
      20 => 'year3_galvus',
      21 => 'year3_galvusmet',
      22 => 'year3_byetta',
      23 => 'year3_trajenta',
      24 => 'year3_novorapid',
      25 => 'year3_novomix',
      26 => 'year3_actrapid',
      27 => 'year3_nph',
      28 => 'year3_levemir',
      29 => 'year3_lantus',
      30 => 'year3_humalog',
      31 => 'year3_starlix',
      32 => 'year3_novonorm',
      33 => 'year3_glucobay',
      34 => 'year3_glufast',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Drugs',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_drugs_year_3|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drugs_year_4|node|study|default';
  $field_group->group_name = 'group_drugs_year_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_year_4';
  $field_group->data = array(
    'label' => 'Drugs ',
    'weight' => '47',
    'children' => array(
      0 => 'field_year_4_su',
      1 => 'field_year_4_metformin',
      2 => 'field_year_4_tzd',
      3 => 'field_year_4_dpp_4',
      4 => 'field_year_4_insulin',
      5 => 'field_year_4_others',
      6 => 'year4_amaryl',
      7 => 'year4_amaryl_m',
      8 => 'year4_euglucon',
      9 => 'year4_diamicron',
      10 => 'year4_glidiab',
      11 => 'year4_glucomet',
      12 => 'year4_actos',
      13 => 'year4_avandia',
      14 => 'year4_actosmet',
      15 => 'year4_avandamet',
      16 => 'year4_januvia',
      17 => 'year4_janumet',
      18 => 'year4_onglyza',
      19 => 'year4_kombiglyze',
      20 => 'year4_galvus',
      21 => 'year4_galvusmet',
      22 => 'year4_byetta',
      23 => 'year4_trajenta',
      24 => 'year4_novorapid',
      25 => 'year4_novomix',
      26 => 'year4_actrapid',
      27 => 'year4_nph',
      28 => 'year4_levemir',
      29 => 'year4_lantus',
      30 => 'year4_humalog',
      31 => 'year4_glufast',
      32 => 'year4_starlix',
      33 => 'year4_novonorm',
      34 => 'year4_glucobay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Drugs ',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_drugs_year_4|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_drugs_year_5|node|study|default';
  $field_group->group_name = 'group_drugs_year_5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_year_5';
  $field_group->data = array(
    'label' => 'Drugs',
    'weight' => '17',
    'children' => array(
      0 => 'field_final_su',
      1 => 'field_final_metformin',
      2 => 'field_final_tzd',
      3 => 'field_final_dpp_4',
      4 => 'field_final_insulin',
      5 => 'field_final_others',
      6 => 'year5_amaryl',
      7 => 'year5_amaryl_m',
      8 => 'year5_euglucon',
      9 => 'year5_diamicron',
      10 => 'year5_glidiab',
      11 => 'year5_glucomet',
      12 => 'year5_actos',
      13 => 'year5_avandia',
      14 => 'year5_actosmet',
      15 => 'year5_avandamet',
      16 => 'year5_januvia',
      17 => 'year5_janumet',
      18 => 'year5_onglyza',
      19 => 'year5_kombiglyze',
      20 => 'year5_galvus',
      21 => 'year5_galvusmet',
      22 => 'year5_byetta',
      23 => 'year5_trajenta',
      24 => 'year5_novorapid',
      25 => 'year5_novomix',
      26 => 'year5_actrapid',
      27 => 'year5_nph',
      28 => 'year5_levemir',
      29 => 'year5_lantus',
      30 => 'year5_humalog',
      31 => 'year5_glufast',
      32 => 'year5_starlix',
      33 => 'year5_novonorm',
      34 => 'year5_glucobay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Drugs',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_drugs_year_5|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_final_diagnosis|node|study|form';
  $field_group->group_name = 'group_final_diagnosis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_follow_up_data';
  $field_group->data = array(
    'label' => '研究結束前的資料',
    'weight' => '33',
    'children' => array(
      0 => 'field_final_smoking',
      1 => 'field_final_hdl',
      2 => 'field_final_ldl',
      3 => 'field_final_sbp',
      4 => 'field_final_hba1c',
      5 => 'field_final_tg',
      6 => 'field_final_cholesterol',
      7 => 'field_final_creatinine',
      8 => 'field_final_eye_exam',
      9 => 'field_final_uacr',
      10 => 'group_year_5_drugs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_final_diagnosis|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_follow_up_data|node|study|form';
  $field_group->group_name = 'group_follow_up_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Follow up data',
    'weight' => '2',
    'children' => array(
      0 => 'group_final_diagnosis',
      1 => 'group_year_1',
      2 => 'group_year_2',
      3 => 'group_year_3',
      4 => 'group_year_4',
      5 => 'group_year_0',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_follow_up_data|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_follow_up|node|study|default';
  $field_group->group_name = 'group_follow_up';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Follow up',
    'weight' => '1',
    'children' => array(
      0 => 'group_year_0',
      1 => 'group_year_1',
      2 => 'group_year_2',
      3 => 'group_year_3',
      4 => 'group_year_4',
      5 => 'group_year_5',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_follow_up|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_glucophage|node|study|form';
  $field_group->group_name = 'group_glucophage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_2_drugs';
  $field_group->data = array(
    'label' => 'Glucophage',
    'weight' => '35',
    'children' => array(
      0 => 'field_year_2_metformin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_glucophage|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_initial_risk_factor|node|study|form';
  $field_group->group_name = 'group_initial_risk_factor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_summary';
  $field_group->data = array(
    'label' => '風險因子',
    'weight' => '3',
    'children' => array(
      0 => 'field_atrial_fibrillation',
      1 => 'field_pvd',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_initial_risk_factor|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_others|node|study|form';
  $field_group->group_name = 'group_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_summary';
  $field_group->data = array(
    'label' => '其他',
    'weight' => '6',
    'children' => array(
      0 => 'field_group',
      1 => 'field_ethnicity',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_others|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_past_history|node|study|default';
  $field_group->group_name = 'group_past_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_basic';
  $field_group->data = array(
    'label' => 'Past history',
    'weight' => '3',
    'children' => array(
      0 => 'field_ihd',
      1 => 'field_chf',
      2 => 'field_amputation',
      3 => 'field_blind',
      4 => 'field_renal_disease',
      5 => 'field_stroke',
      6 => 'field_mi',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_past_history|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_past_history|node|study|form';
  $field_group->group_name = 'group_past_history';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_summary';
  $field_group->data = array(
    'label' => '過去病史',
    'weight' => '5',
    'children' => array(
      0 => 'field_ihd',
      1 => 'field_chf',
      2 => 'field_amputation',
      3 => 'field_blind',
      4 => 'field_renal_disease',
      5 => 'field_stroke',
      6 => 'field_mi',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_past_history|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_risk_factor|node|study|default';
  $field_group->group_name = 'group_risk_factor';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_basic';
  $field_group->data = array(
    'label' => 'Risk factor',
    'weight' => '2',
    'children' => array(
      0 => 'field_atrial_fibrillation',
      1 => 'field_pvd',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_risk_factor|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary|node|study|form';
  $field_group->group_name = 'group_summary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'summary',
    'weight' => '1',
    'children' => array(
      0 => 'group_basic_demographic',
      1 => 'group_others',
      2 => 'group_initial_risk_factor',
      3 => 'group_past_history',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_summary|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_complication|node|study|form';
  $field_group->group_name = 'group_year0_complication';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_0';
  $field_group->data = array(
    'label' => 'Complication',
    'weight' => '34',
    'children' => array(
      0 => 'group_year0_neoplasm',
      1 => 'group_year0_mental',
      2 => 'group_year0_cv',
      3 => 'group_year0_gu',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Complication',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_year0_complication|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_cv|node|study|form';
  $field_group->group_name = 'group_year0_cv';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year0_complication';
  $field_group->data = array(
    'label' => 'Circulatory system (390-459)',
    'weight' => '34',
    'children' => array(
      0 => 'year0_icd_circulatory',
      1 => 'year0_icd_circulatory_htn',
      2 => 'year0_icd_circulatory_ischemic',
      3 => 'year0_icd_circulatory_lung',
      4 => 'year0_icd_circulatory_others',
      5 => 'year0_icd_circulatory_brain',
      6 => 'year0_icd_circulatory_artery',
      7 => 'year0_icd_circulatory_vein',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Circulatory system (390-459)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_year0_cv|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_dpp4|node|study|form';
  $field_group->group_name = 'group_year0_dpp4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_drugs_tx';
  $field_group->data = array(
    'label' => 'DPP-4 inhibitor',
    'weight' => '37',
    'children' => array(
      0 => 'field_initial_dpp_4',
      1 => 'year0_januvia',
      2 => 'year0_janumet',
      3 => 'year0_onglyza',
      4 => 'year0_kombiglyze',
      5 => 'year0_galvus',
      6 => 'year0_galvusmet',
      7 => 'year0_byetta',
      8 => 'year0_trajenta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year0_dpp4|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_gu|node|study|form';
  $field_group->group_name = 'group_year0_gu';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year0_complication';
  $field_group->data = array(
    'label' => 'Genitourinary system (580-629)',
    'weight' => '35',
    'children' => array(
      0 => 'year0_icd_gu',
      1 => 'year0_icd_gu_nephritis',
      2 => 'year0_icd_gu_others',
      3 => 'year0_icd_gu_male',
      4 => 'year0_icd_gu_breast',
      5 => 'year0_icd_gu_female',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Genitourinary system (580-629)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_year0_gu|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_insulin|node|study|form';
  $field_group->group_name = 'group_year0_insulin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_drugs_tx';
  $field_group->data = array(
    'label' => 'Insulin',
    'weight' => '38',
    'children' => array(
      0 => 'field_initial_insulin',
      1 => 'year0_novorapid',
      2 => 'year0_novomix',
      3 => 'year0_actrapid',
      4 => 'year0_nph',
      5 => 'year0_levemir',
      6 => 'year0_lantus',
      7 => 'year0_humalog',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year0_insulin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_mental|node|study|form';
  $field_group->group_name = 'group_year0_mental';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year0_complication';
  $field_group->data = array(
    'label' => 'Mental disorder (290-319)',
    'weight' => '33',
    'children' => array(
      0 => 'year0_icd_mental',
      1 => 'year0_icd_mental_organic',
      2 => 'year0_icd_mental_others',
      3 => 'year0_icd_mental_neurotic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Mental disorder (290-319)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_year0_mental|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_metformin|node|study|form';
  $field_group->group_name = 'group_year0_metformin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_drugs_tx';
  $field_group->data = array(
    'label' => 'Metformin',
    'weight' => '35',
    'children' => array(
      0 => 'field_initial_metformin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year0_metformin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_neoplasm|node|study|form';
  $field_group->group_name = 'group_year0_neoplasm';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year0_complication';
  $field_group->data = array(
    'label' => 'Neoplasm (140-239)',
    'weight' => '32',
    'children' => array(
      0 => 'year0_icd_neoplasm',
      1 => 'year0_icd_neoplasm_head_and_neck',
      2 => 'year0_icd_neoplasm_gi_tract',
      3 => 'year0_icd_neoplasm_respiratory',
      4 => 'year0_icd_neoplasm_bone',
      5 => 'year0_icd_neoplasm_gu',
      6 => 'year0_icd_neoplasm_others',
      7 => 'year0_icd_neoplasm_hematologic',
      8 => 'year0_icd_neoplasm_benign',
      9 => 'year0_icd_neoplasm_cis',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Neoplasm (140-239)',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_year0_neoplasm|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_others|node|study|form';
  $field_group->group_name = 'group_year0_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_drugs_tx';
  $field_group->data = array(
    'label' => 'Others',
    'weight' => '40',
    'children' => array(
      0 => 'field_initial_others',
      1 => 'year0_glufast',
      2 => 'year0_starlix',
      3 => 'year0_novonorm',
      4 => 'year0_glucobay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year0_others|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_su_summary|node|study|form';
  $field_group->group_name = 'group_year0_su_summary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_drugs_tx';
  $field_group->data = array(
    'label' => 'Sulphonylurea (SU)',
    'weight' => '34',
    'children' => array(
      0 => 'field_initial_su',
      1 => 'year0_amarylm',
      2 => 'year0_euglucon',
      3 => 'year0_diamicron',
      4 => 'year0_glidiab',
      5 => 'year0_glucomet',
      6 => 'year0_amaryl',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year0_su_summary|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year0_tzd|node|study|form';
  $field_group->group_name = 'group_year0_tzd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_drugs_tx';
  $field_group->data = array(
    'label' => 'TZD',
    'weight' => '36',
    'children' => array(
      0 => 'field_initial_tzd',
      1 => 'year0_actos',
      2 => 'year0_avandia',
      3 => 'year0_actosmet',
      4 => 'year0_avandamet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year0_tzd|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year1_dpp4|node|study|form';
  $field_group->group_name = 'group_year1_dpp4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_1_drugs';
  $field_group->data = array(
    'label' => 'DPP-4 inhibitor',
    'weight' => '7',
    'children' => array(
      0 => 'field_year_1_dpp_4',
      1 => 'year1_januvia',
      2 => 'year1_janumet',
      3 => 'year1_onglyza',
      4 => 'year1_kombiglyze',
      5 => 'year1_galvus',
      6 => 'year1_galvusmet',
      7 => 'year1_byetta',
      8 => 'year1_trajenta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year1_dpp4|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year1_insulin|node|study|form';
  $field_group->group_name = 'group_year1_insulin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_1_drugs';
  $field_group->data = array(
    'label' => 'Insulin',
    'weight' => '8',
    'children' => array(
      0 => 'field_year_1_insulin',
      1 => 'year1_novorapid',
      2 => 'year1_novomix',
      3 => 'year1_actrapid',
      4 => 'year1_nph',
      5 => 'year1_levemir',
      6 => 'year1_lantus',
      7 => 'year1_humalog',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year1_insulin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year1_metformin|node|study|form';
  $field_group->group_name = 'group_year1_metformin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_1_drugs';
  $field_group->data = array(
    'label' => 'Metformin',
    'weight' => '4',
    'children' => array(
      0 => 'field_year_1_metformin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year1_metformin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year1_others|node|study|form';
  $field_group->group_name = 'group_year1_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_1_drugs';
  $field_group->data = array(
    'label' => 'Others',
    'weight' => '9',
    'children' => array(
      0 => 'field_year_1_others',
      1 => 'year1_glufast',
      2 => 'year1_starlix',
      3 => 'year1_novonorm',
      4 => 'year1_glucobay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year1_others|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year1_su|node|study|form';
  $field_group->group_name = 'group_year1_su';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_1_drugs';
  $field_group->data = array(
    'label' => 'Sulphonylurea (SU)',
    'weight' => '3',
    'children' => array(
      0 => 'field_year_1_su',
      1 => 'year1_amaryl',
      2 => 'year1_year1_amaryl_m',
      3 => 'year1_euglucon',
      4 => 'year1_diamicron',
      5 => 'year1_glidiab',
      6 => 'year1_glucomet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year1_su|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year1_tzd|node|study|form';
  $field_group->group_name = 'group_year1_tzd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_1_drugs';
  $field_group->data = array(
    'label' => 'TZD',
    'weight' => '5',
    'children' => array(
      0 => 'field_year_1_tzd',
      1 => 'year1_actos',
      2 => 'year1_avandia',
      3 => 'year1_actosmet',
      4 => 'year1_avandamet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year1_tzd|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year2_dpp4|node|study|form';
  $field_group->group_name = 'group_year2_dpp4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_2_drugs';
  $field_group->data = array(
    'label' => 'DPP-4 inhibitor',
    'weight' => '37',
    'children' => array(
      0 => 'field_year_2_dpp_4',
      1 => 'year2_januvia',
      2 => 'year2_janumet',
      3 => 'year2_onglyza',
      4 => 'year2_kombiglyze',
      5 => 'year2_galvus',
      6 => 'year2_galvusmet',
      7 => 'year2_byetta',
      8 => 'year2_trajenta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year2_dpp4|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year2_insulin|node|study|form';
  $field_group->group_name = 'group_year2_insulin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_2_drugs';
  $field_group->data = array(
    'label' => 'Insulin',
    'weight' => '38',
    'children' => array(
      0 => 'field_year_2_insulin',
      1 => 'year2_novorapid',
      2 => 'year2_novomix',
      3 => 'year2_actrapid',
      4 => 'year2_nph',
      5 => 'year2_levemir',
      6 => 'year2_lantus',
      7 => 'year2_humalog',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year2_insulin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year2_others|node|study|form';
  $field_group->group_name = 'group_year2_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_2_drugs';
  $field_group->data = array(
    'label' => 'Others',
    'weight' => '39',
    'children' => array(
      0 => 'field_year_2_others',
      1 => 'year2_glufast',
      2 => 'year2_starlix',
      3 => 'year2_novonorm',
      4 => 'year2_glucobay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year2_others|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year2_su|node|study|form';
  $field_group->group_name = 'group_year2_su';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_2_drugs';
  $field_group->data = array(
    'label' => 'Sulphonylurea (SU)',
    'weight' => '34',
    'children' => array(
      0 => 'field_year_2_su',
      1 => 'year2_amaryl',
      2 => 'year2_amaryl_m',
      3 => 'year2_euglucon',
      4 => 'year2_diamicron',
      5 => 'year2_glidiab',
      6 => 'year2_glucomet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year2_su|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year2_tzd|node|study|form';
  $field_group->group_name = 'group_year2_tzd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_2_drugs';
  $field_group->data = array(
    'label' => 'TZD',
    'weight' => '36',
    'children' => array(
      0 => 'field_year_2_tzd',
      1 => 'year2_actos',
      2 => 'year2_avandia',
      3 => 'year2_actosmet',
      4 => 'year2_avandamet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year2_tzd|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year3_dpp4|node|study|form';
  $field_group->group_name = 'group_year3_dpp4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_3_drugs';
  $field_group->data = array(
    'label' => 'DPP-4 inhibitor',
    'weight' => '6',
    'children' => array(
      0 => 'field_year_3_dpp_4',
      1 => 'year3_januvia',
      2 => 'year3_janumet',
      3 => 'year3_onglyza',
      4 => 'year3_kombiglyze',
      5 => 'year3_galvus',
      6 => 'year3_galvusmet',
      7 => 'year3_byetta',
      8 => 'year3_trajenta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year3_dpp4|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year3_insulin|node|study|form';
  $field_group->group_name = 'group_year3_insulin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_3_drugs';
  $field_group->data = array(
    'label' => 'Insulin',
    'weight' => '7',
    'children' => array(
      0 => 'field_year_3_insulin',
      1 => 'year3_novorapid',
      2 => 'year3_novomix',
      3 => 'year3_actrapid',
      4 => 'year3_nph',
      5 => 'year3_levemir',
      6 => 'year3_lantus',
      7 => 'year3_humalog',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year3_insulin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year3_metformin|node|study|form';
  $field_group->group_name = 'group_year3_metformin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_3_drugs';
  $field_group->data = array(
    'label' => 'Metformin',
    'weight' => '4',
    'children' => array(
      0 => 'field_year_3_metformin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year3_metformin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year3_others|node|study|form';
  $field_group->group_name = 'group_year3_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_3_drugs';
  $field_group->data = array(
    'label' => 'Others',
    'weight' => '8',
    'children' => array(
      0 => 'field_year_3_others',
      1 => 'year3_starlix',
      2 => 'year3_novonorm',
      3 => 'year3_glucobay',
      4 => 'year3_glufast',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year3_others|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year3_su|node|study|form';
  $field_group->group_name = 'group_year3_su';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_3_drugs';
  $field_group->data = array(
    'label' => 'Sulphonylurea (SU)',
    'weight' => '3',
    'children' => array(
      0 => 'field_year_3_su',
      1 => 'year3_amaryl',
      2 => 'year3_amaryl_m',
      3 => 'year3_euglucon',
      4 => 'year3_diamicron',
      5 => 'year3_glidiab',
      6 => 'year3_glucomet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year3_su|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year3_tzd|node|study|form';
  $field_group->group_name = 'group_year3_tzd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_3_drugs';
  $field_group->data = array(
    'label' => 'TZD',
    'weight' => '5',
    'children' => array(
      0 => 'field_year_3_tzd',
      1 => 'year3_actos',
      2 => 'year3_avandia',
      3 => 'year3_actosmet',
      4 => 'year3_avandamet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year3_tzd|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year4_dpp4|node|study|form';
  $field_group->group_name = 'group_year4_dpp4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_4_drugs';
  $field_group->data = array(
    'label' => 'DPP-4 inhibitor',
    'weight' => '8',
    'children' => array(
      0 => 'field_year_4_dpp_4',
      1 => 'year4_januvia',
      2 => 'year4_janumet',
      3 => 'year4_onglyza',
      4 => 'year4_kombiglyze',
      5 => 'year4_galvus',
      6 => 'year4_galvusmet',
      7 => 'year4_byetta',
      8 => 'year4_trajenta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year4_dpp4|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year4_insulin|node|study|form';
  $field_group->group_name = 'group_year4_insulin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_4_drugs';
  $field_group->data = array(
    'label' => 'Insulin',
    'weight' => '9',
    'children' => array(
      0 => 'field_year_4_insulin',
      1 => 'year4_novorapid',
      2 => 'year4_novomix',
      3 => 'year4_actrapid',
      4 => 'year4_nph',
      5 => 'year4_levemir',
      6 => 'year4_lantus',
      7 => 'year4_humalog',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year4_insulin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year4_metformin|node|study|form';
  $field_group->group_name = 'group_year4_metformin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_4_drugs';
  $field_group->data = array(
    'label' => 'Metformin',
    'weight' => '6',
    'children' => array(
      0 => 'field_year_4_metformin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year4_metformin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year4_others|node|study|form';
  $field_group->group_name = 'group_year4_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_4_drugs';
  $field_group->data = array(
    'label' => 'Others',
    'weight' => '10',
    'children' => array(
      0 => 'field_year_4_others',
      1 => 'year4_glufast',
      2 => 'year4_starlix',
      3 => 'year4_novonorm',
      4 => 'year4_glucobay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year4_others|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year4_su|node|study|form';
  $field_group->group_name = 'group_year4_su';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_4_drugs';
  $field_group->data = array(
    'label' => 'Sulphonylurea (SU)',
    'weight' => '5',
    'children' => array(
      0 => 'field_year_4_su',
      1 => 'year4_amaryl',
      2 => 'year4_amaryl_m',
      3 => 'year4_euglucon',
      4 => 'year4_diamicron',
      5 => 'year4_glidiab',
      6 => 'year4_glucomet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year4_su|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year4_tzd|node|study|form';
  $field_group->group_name = 'group_year4_tzd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_4_drugs';
  $field_group->data = array(
    'label' => 'TZD',
    'weight' => '7',
    'children' => array(
      0 => 'field_year_4_tzd',
      1 => 'year4_actos',
      2 => 'year4_avandia',
      3 => 'year4_actosmet',
      4 => 'year4_avandamet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year4_tzd|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year5_dpp4|node|study|form';
  $field_group->group_name = 'group_year5_dpp4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_5_drugs';
  $field_group->data = array(
    'label' => 'DPP-4 inhibitor',
    'weight' => '11',
    'children' => array(
      0 => 'field_final_dpp_4',
      1 => 'year5_januvia',
      2 => 'year5_janumet',
      3 => 'year5_onglyza',
      4 => 'year5_kombiglyze',
      5 => 'year5_galvus',
      6 => 'year5_galvusmet',
      7 => 'year5_byetta',
      8 => 'year5_trajenta',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year5_dpp4|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year5_insulin|node|study|form';
  $field_group->group_name = 'group_year5_insulin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_5_drugs';
  $field_group->data = array(
    'label' => 'Insulin',
    'weight' => '12',
    'children' => array(
      0 => 'field_final_insulin',
      1 => 'year5_novorapid',
      2 => 'year5_novomix',
      3 => 'year5_actrapid',
      4 => 'year5_nph',
      5 => 'year5_levemir',
      6 => 'year5_lantus',
      7 => 'year5_humalog',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year5_insulin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year5_metformin|node|study|form';
  $field_group->group_name = 'group_year5_metformin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_5_drugs';
  $field_group->data = array(
    'label' => 'Metformin',
    'weight' => '9',
    'children' => array(
      0 => 'field_final_metformin',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year5_metformin|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year5_others|node|study|form';
  $field_group->group_name = 'group_year5_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_5_drugs';
  $field_group->data = array(
    'label' => 'Others',
    'weight' => '13',
    'children' => array(
      0 => 'field_final_others',
      1 => 'year5_glufast',
      2 => 'year5_starlix',
      3 => 'year5_novonorm',
      4 => 'year5_glucobay',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year5_others|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year5_su|node|study|form';
  $field_group->group_name = 'group_year5_su';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_5_drugs';
  $field_group->data = array(
    'label' => 'Sulphonylurea (SU)',
    'weight' => '8',
    'children' => array(
      0 => 'field_final_su',
      1 => 'year5_amaryl',
      2 => 'year5_amaryl_m',
      3 => 'year5_euglucon',
      4 => 'year5_diamicron',
      5 => 'year5_glidiab',
      6 => 'year5_glucomet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year5_su|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year5_tzd|node|study|form';
  $field_group->group_name = 'group_year5_tzd';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_5_drugs';
  $field_group->data = array(
    'label' => 'TZD',
    'weight' => '10',
    'children' => array(
      0 => 'field_final_tzd',
      1 => 'year5_actos',
      2 => 'year5_avandia',
      3 => 'year5_actosmet',
      4 => 'year5_avandamet',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year5_tzd|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_0|node|study|default';
  $field_group->group_name = 'group_year_0';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_follow_up';
  $field_group->data = array(
    'label' => 'Year 0',
    'weight' => '111',
    'children' => array(
      0 => 'field_smoking',
      1 => 'field_initial_cholesterol',
      2 => 'field_initial_hdl',
      3 => 'field_initial_ldl',
      4 => 'field_initial_sbp',
      5 => 'field_initial_hba1c',
      6 => 'field_initial_tg',
      7 => 'field_initial_creatinine',
      8 => 'field_initial_eye_exam',
      9 => 'field_initial_uacr',
      10 => 'group_drugs_year_0',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_year_0|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_0|node|study|form';
  $field_group->group_name = 'group_year_0';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_follow_up_data';
  $field_group->data = array(
    'label' => '收案',
    'weight' => '28',
    'children' => array(
      0 => 'field_smoking',
      1 => 'field_initial_cholesterol',
      2 => 'field_initial_hdl',
      3 => 'field_initial_ldl',
      4 => 'field_initial_sbp',
      5 => 'field_initial_hba1c',
      6 => 'field_initial_tg',
      7 => 'field_initial_creatinine',
      8 => 'field_initial_eye_exam',
      9 => 'field_initial_uacr',
      10 => 'group_drugs_tx',
      11 => 'group_year0_complication',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => '收案',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_year_0|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_1_drugs|node|study|form';
  $field_group->group_name = 'group_year_1_drugs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_1';
  $field_group->data = array(
    'label' => '目前治療',
    'weight' => '14',
    'children' => array(
      0 => 'group_year1_su',
      1 => 'group_year1_metformin',
      2 => 'group_year1_tzd',
      3 => 'group_year1_dpp4',
      4 => 'group_year1_insulin',
      5 => 'group_year1_others',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '目前治療',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_year_1_drugs|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_1|node|study|default';
  $field_group->group_name = 'group_year_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_follow_up';
  $field_group->data = array(
    'label' => 'year 1',
    'weight' => '112',
    'children' => array(
      0 => 'field_smoking_year_1',
      1 => 'field_tg_year_1',
      2 => 'field_cholesterol_year_1',
      3 => 'field_hdl_year_1',
      4 => 'field_ldl_year_1',
      5 => 'field_sbp_year_1',
      6 => 'field_hba1c_year_1',
      7 => 'field_creatinine_year_1',
      8 => 'field_eye_exam_year_1',
      9 => 'field_uacr_year_1',
      10 => 'group_drugs_year_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'year 1',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_year_1|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_1|node|study|form';
  $field_group->group_name = 'group_year_1';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_follow_up_data';
  $field_group->data = array(
    'label' => '第一年',
    'weight' => '29',
    'children' => array(
      0 => 'field_smoking_year_1',
      1 => 'field_tg_year_1',
      2 => 'field_cholesterol_year_1',
      3 => 'field_hdl_year_1',
      4 => 'field_ldl_year_1',
      5 => 'field_sbp_year_1',
      6 => 'field_hba1c_year_1',
      7 => 'field_creatinine_year_1',
      8 => 'field_eye_exam_year_1',
      9 => 'field_uacr_year_1',
      10 => 'group_year_1_drugs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year_1|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_2_drugs|node|study|form';
  $field_group->group_name = 'group_year_2_drugs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_2';
  $field_group->data = array(
    'label' => '目前治療',
    'weight' => '26',
    'children' => array(
      0 => 'group_year2_su',
      1 => 'group_glucophage',
      2 => 'group_year2_tzd',
      3 => 'group_year2_dpp4',
      4 => 'group_year2_insulin',
      5 => 'group_year2_others',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '目前治療',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_year_2_drugs|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_2|node|study|default';
  $field_group->group_name = 'group_year_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_follow_up';
  $field_group->data = array(
    'label' => 'year 2',
    'weight' => '113',
    'children' => array(
      0 => 'field_smoking_year_2',
      1 => 'field_tg_year_2',
      2 => 'field_cholesterol_year_2',
      3 => 'field_hdl_year_2',
      4 => 'field_ldl_year_2',
      5 => 'field_sbp_year_2',
      6 => 'field_hba1c_year_2',
      7 => 'field_creatinine_year_2',
      8 => 'field_eye_exam_year_2',
      9 => 'field_uacr_year_2',
      10 => 'group_drugs_year_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_year_2|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_2|node|study|form';
  $field_group->group_name = 'group_year_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_follow_up_data';
  $field_group->data = array(
    'label' => '第二年',
    'weight' => '30',
    'children' => array(
      0 => 'field_smoking_year_2',
      1 => 'field_tg_year_2',
      2 => 'field_cholesterol_year_2',
      3 => 'field_hdl_year_2',
      4 => 'field_ldl_year_2',
      5 => 'field_sbp_year_2',
      6 => 'field_hba1c_year_2',
      7 => 'field_creatinine_year_2',
      8 => 'field_eye_exam_year_2',
      9 => 'field_uacr_year_2',
      10 => 'group_year_2_drugs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year_2|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_3_drugs|node|study|form';
  $field_group->group_name = 'group_year_3_drugs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_3';
  $field_group->data = array(
    'label' => '目前治療',
    'weight' => '3',
    'children' => array(
      0 => 'group_year3_su',
      1 => 'group_year3_metformin',
      2 => 'group_year3_tzd',
      3 => 'group_year3_dpp4',
      4 => 'group_year3_insulin',
      5 => 'group_year3_others',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '目前治療',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_year_3_drugs|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_3|node|study|default';
  $field_group->group_name = 'group_year_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_follow_up';
  $field_group->data = array(
    'label' => 'year 3',
    'weight' => '114',
    'children' => array(
      0 => 'field_smoking_year_3',
      1 => 'field_tg_year_3',
      2 => 'field_cholesterol_year_3',
      3 => 'field_hdl_year_3',
      4 => 'field_ldl_year_3',
      5 => 'field_sbp_year_3',
      6 => 'field_hba1c_year_3',
      7 => 'field_creatinine_year_3',
      8 => 'field_eye_exam_year_3',
      9 => 'field_uacr_year_3',
      10 => 'group_drugs_year_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_year_3|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_3|node|study|form';
  $field_group->group_name = 'group_year_3';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_follow_up_data';
  $field_group->data = array(
    'label' => '第三年',
    'weight' => '31',
    'children' => array(
      0 => 'field_smoking_year_3',
      1 => 'field_tg_year_3',
      2 => 'field_cholesterol_year_3',
      3 => 'field_hdl_year_3',
      4 => 'field_ldl_year_3',
      5 => 'field_sbp_year_3',
      6 => 'field_hba1c_year_3',
      7 => 'field_creatinine_year_3',
      8 => 'field_eye_exam_year_3',
      9 => 'field_uacr_year_3',
      10 => 'group_year_3_drugs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year_3|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_4_drugs|node|study|form';
  $field_group->group_name = 'group_year_4_drugs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_year_4';
  $field_group->data = array(
    'label' => '目前治療',
    'weight' => '3',
    'children' => array(
      0 => 'group_year4_su',
      1 => 'group_year4_metformin',
      2 => 'group_year4_tzd',
      3 => 'group_year4_dpp4',
      4 => 'group_year4_insulin',
      5 => 'group_year4_others',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '目前治療',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_year_4_drugs|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_4|node|study|default';
  $field_group->group_name = 'group_year_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_follow_up';
  $field_group->data = array(
    'label' => 'year 4',
    'weight' => '115',
    'children' => array(
      0 => 'field_smoking_year_4',
      1 => 'field_tg_year_4',
      2 => 'field_cholesterol_year_4',
      3 => 'field_hdl_year_4',
      4 => 'field_ldl_year_4',
      5 => 'field_sbp_year_4',
      6 => 'field_hba1c_year_4',
      7 => 'field_creatinine_year_4',
      8 => 'field_eye_exam_year_4',
      9 => 'field_uacr_year_4',
      10 => 'group_drugs_year_4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_year_4|node|study|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_4|node|study|form';
  $field_group->group_name = 'group_year_4';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_follow_up_data';
  $field_group->data = array(
    'label' => '第四年',
    'weight' => '32',
    'children' => array(
      0 => 'field_smoking_year_4',
      1 => 'field_tg_year_4',
      2 => 'field_cholesterol_year_4',
      3 => 'field_hdl_year_4',
      4 => 'field_ldl_year_4',
      5 => 'field_sbp_year_4',
      6 => 'field_hba1c_year_4',
      7 => 'field_creatinine_year_4',
      8 => 'field_eye_exam_year_4',
      9 => 'field_uacr_year_4',
      10 => 'group_year_4_drugs',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_year_4|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_5_drugs|node|study|form';
  $field_group->group_name = 'group_year_5_drugs';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_final_diagnosis';
  $field_group->data = array(
    'label' => '目前治療',
    'weight' => '3',
    'children' => array(
      0 => 'group_year5_su',
      1 => 'group_year5_metformin',
      2 => 'group_year5_tzd',
      3 => 'group_year5_dpp4',
      4 => 'group_year5_insulin',
      5 => 'group_year5_others',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '目前治療',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_year_5_drugs|node|study|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_year_5|node|study|default';
  $field_group->group_name = 'group_year_5';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_follow_up';
  $field_group->data = array(
    'label' => 'year 5',
    'weight' => '116',
    'children' => array(
      0 => 'field_final_smoking',
      1 => 'field_final_hdl',
      2 => 'field_final_ldl',
      3 => 'field_final_sbp',
      4 => 'field_final_hba1c',
      5 => 'field_final_tg',
      6 => 'field_final_cholesterol',
      7 => 'field_final_creatinine',
      8 => 'field_final_eye_exam',
      9 => 'field_final_uacr',
      10 => 'group_drugs_year_5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
      ),
    ),
  );
  $export['group_year_5|node|study|default'] = $field_group;

  return $export;
}
