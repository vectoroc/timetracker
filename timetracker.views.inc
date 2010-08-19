<?php

/**
 * Implementation of hook_views_data().
 */
function timetracker_views_data() {
  $data = array();

  $data['timetracker']['table']['group'] = t('Time tracking');

  // Advertise this table as a possible base table.
  $data['timetracker']['table']['base'] = array(
    'field' => 'tid',
    'title' => t('Time Tracker'),
    'help' => t('Time tracking entries.'),
  );

  // Joins.
  $data['timetracker']['table']['join'] = array(
    'node' => array(
      'left_field' => 'nid',
      'field' => 'nid',
    ),
  );
  $data['timetracker']['table']['join'] = array(
    'users' => array(
      'left_field' => 'uid',
      'field' => 'uid',
    ),
  );

  // Fields.
  $data['timetracker']['timestamp'] = array(
    'title' => t('Activity date'),
    'help' => t('Date the time was entered.'),
    'field' => array(
      'handler' => 'views_handler_field_date',
      'click sortable' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort_date',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_date',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_date',
    ),
  );

  $data['timetracker']['uid'] = array(
    'title' => t('User'),
    'help' => t('The user that entered time.'),
    'relationship' => array(
      'base' => 'users',
      'field' => 'uid',
      'handler' => 'views_handler_relationship',
      'label' => t('Time tracking user'),
    ),
  );
  
  // TODO need a custom handler
  $data['timetracker']['value'] = array(
    'title' => t('Hours'),
    'help' => t('Time spent during a time entry.'),
    'field' => array(
      'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
     ),
    'sort' => array(
      'handler' => 'views_handler_sort_numeric',
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_numeric',
    ),
  );

  $data['timetracker']['note'] = array(
    'title' => t('Note'),
    'help' => t('Notes or details on the time tracking activity.'),
     'field' => array(
      'handler' => 'views_handler_field',
     ),
     'sort' => array(
       'handler' => 'views_handler_sort',
     ),
  );

  $data['timetracker']['nid'] = array(
    'title' => t('Node'),
    'help' => t('The node related to the time entry.'),
    'relationship' => array(
      'base' => 'node',
      'field' => 'nid',
      'handler' => 'views_handler_relationship',
      'label' => t('Node'),
    ),
  );

  return $data;
}