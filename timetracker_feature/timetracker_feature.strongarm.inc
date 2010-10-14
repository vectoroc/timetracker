<?php

/**
 * Implementation of hook_strongarm().
 */
function timetracker_feature_strongarm() {
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
