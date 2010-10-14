<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function timetracker_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: features:timetracker
  $menu_links['features:timetracker'] = array(
    'menu_name' => 'features',
    'link_path' => 'timetracker',
    'router_path' => 'timetracker',
    'link_title' => 'Time Tracker',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Time Tracker');


  return $menu_links;
}
