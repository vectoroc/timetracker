<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function timetracker_feature_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'timetracker_listing';
  $context->description = '';
  $context->tag = 'Timetracker';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'timetracker:page_4' => 'timetracker:page_4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'timetracker_feature-filters' => array(
          'module' => 'timetracker_feature',
          'delta' => 'filters',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'timetracker',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Timetracker');

  $export['timetracker_listing'] = $context;
  return $export;
}
