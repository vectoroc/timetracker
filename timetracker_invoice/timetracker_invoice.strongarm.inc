<?php

/**
 * Implementation of hook_strongarm().
 */
function timetracker_invoice_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_timetracker_invoice';
  $strongarm->value = 0;

  $export['comment_anonymous_timetracker_invoice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_timetracker_invoice';
  $strongarm->value = '3';

  $export['comment_controls_timetracker_invoice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_timetracker_invoice';
  $strongarm->value = '4';

  $export['comment_default_mode_timetracker_invoice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_timetracker_invoice';
  $strongarm->value = '1';

  $export['comment_default_order_timetracker_invoice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_timetracker_invoice';
  $strongarm->value = '50';

  $export['comment_default_per_page_timetracker_invoice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_timetracker_invoice';
  $strongarm->value = '0';

  $export['comment_form_location_timetracker_invoice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_timetracker_invoice';
  $strongarm->value = '1';

  $export['comment_preview_timetracker_invoice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_timetracker_invoice';
  $strongarm->value = '1';

  $export['comment_subject_field_timetracker_invoice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_timetracker_invoice';
  $strongarm->value = '2';

  $export['comment_timetracker_invoice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_timetracker_invoice';
  $strongarm->value = array();

  $export['node_options_timetracker_invoice'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_timetracker_invoice';
  $strongarm->value = '0';

  $export['upload_timetracker_invoice'] = $strongarm;
  return $export;
}
