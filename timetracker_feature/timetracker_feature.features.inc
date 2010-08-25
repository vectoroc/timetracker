<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function timetracker_feature_ctools_plugin_api() {
  module_load_include('inc', 'timetracker_feature', 'timetracker_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_timetracker_feature_ctools_plugin_api', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function timetracker_feature_menu_default_items() {
  module_load_include('inc', 'timetracker_feature', 'timetracker_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_timetracker_feature_menu_default_items', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function timetracker_feature_user_default_permissions() {
  module_load_include('inc', 'timetracker_feature', 'timetracker_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_timetracker_feature_user_default_permissions', $args);
}

/**
 * Implementation of hook_strongarm().
 */
function timetracker_feature_strongarm() {
  module_load_include('inc', 'timetracker_feature', 'timetracker_feature.defaults');
  $args = func_get_args();
  return call_user_func_array('_timetracker_feature_strongarm', $args);
}

/**
 * Implementation of hook_views_default_views().
 */
function timetracker_feature_views_default_views() {
  module_load_include('inc', 'timetracker_feature', 'timetracker_feature.features.views');
  $args = func_get_args();
  return call_user_func_array('_timetracker_feature_views_default_views', $args);
}
