<?php

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _timetracker_feature_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _timetracker_feature_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Time Tracker',
    'path' => 'timetracker',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Time Tracker'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _timetracker_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit timetracker
  $permissions[] = array(
    'name' => 'edit timetracker',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view any timetracker
  $permissions[] = array(
    'name' => 'view any timetracker',
    'roles' => array(),
  );

  // Exported permission: view own timetracker
  $permissions[] = array(
    'name' => 'view own timetracker',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}

/**
 * Helper to implementation of hook_strongarm().
 */
function _timetracker_feature_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'timetracker_node_types';
  $strongarm->value = array(
    'casetracker_basic_case' => 'casetracker_basic_case',
  );

  $export['timetracker_node_types'] = $strongarm;
  return $export;
}
