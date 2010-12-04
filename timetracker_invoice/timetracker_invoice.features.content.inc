<?php

/**
 * Implementation of hook_content_default_fields().
 */
function timetracker_invoice_content_default_fields() {
  $fields = array();

  // Exported field: 
  $fields[FALSE] = array(
    'field_referenced_book_page' => array(
      'field_name' => 'field_referenced_book_page',
      'type_name' => 'blog',
      'display_settings' => array(
        'weight' => 0,
        'parent' => '',
        'label' => array(
          'format' => 'inline',
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'nodereference',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'nodereference',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'nid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
          'index' => TRUE,
        ),
      ),
      'referenceable_types' => array(
        'book' => 'book',
        'event' => 'event',
        'imageset' => 'imageset',
        'admin_message' => 0,
        'blog' => 0,
        'casetracker_basic_case' => 0,
        'feedapi_node' => 0,
        'group' => 0,
        'page' => 0,
        'profile' => 0,
        'casetracker_basic_project' => 0,
        'shoutbox' => 0,
        'feed_ical_item' => 0,
        'feed_ical' => 0,
      ),
      'advanced_view' => '--',
      'advanced_view_args' => '',
      'widget' => array(
        'autocomplete_match' => 'contains',
        'size' => NULL,
        'default_value' => array(
          '0' => array(
            'nid' => NULL,
            '_error_element' => 'default_value_widget][field_referenced_book_page][0][nid][nid',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Referenced Page',
        'weight' => 0,
        'description' => 'Type in the title of another post to add a reference.',
        'type' => 'nodereference_autocomplete',
        'module' => 'nodereference',
      ),
    ),
    'field_date' => array(
      'field_name' => 'field_date',
      'type_name' => 'feed_ical_item',
      'display_settings' => array(
        'weight' => '-3',
        'parent' => '',
        'label' => array(
          'format' => 'inline',
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'date',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '0',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => 20,
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'granularity' => array(
        'year' => 'year',
        'month' => 'month',
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
      ),
      'timezone_db' => '',
      'tz_handling' => 'none',
      'todate' => '',
      'repeat' => 0,
      'repeat_collapsed' => '',
      'default_format' => 'long',
      'widget' => array(
        'default_value' => 'now',
        'default_value_code' => '',
        'default_value2' => 'same',
        'default_value_code2' => '',
        'input_format' => 'Y-m-d H:i:s',
        'input_format_custom' => '',
        'increment' => 1,
        'text_parts' => array(),
        'year_range' => '-3:+3',
        'label_position' => 'above',
        'default_value_custom' => '',
        'default_value_custom2' => '',
        'label' => 'Date',
        'weight' => '-3',
        'description' => '',
        'type' => 'date_text',
        'module' => 'date',
      ),
    ),
    'field_profile_organization' => array(
      'field_name' => 'field_profile_organization',
      'type_name' => 'profile',
      'display_settings' => array(
        'label' => array(
          'format' => 'above',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'weight' => 0,
      ),
      'widget_active' => '1',
      'type' => 'text',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'text_processing' => 0,
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'widget' => array(
        'rows' => NULL,
        'size' => NULL,
        'label' => 'Organization',
        'weight' => 0,
        'description' => '',
        'type' => 'text_textfield',
        'module' => 'text',
      ),
    ),
    'field_profile_telephone' => array(
      'field_name' => 'field_profile_telephone',
      'type_name' => 'profile',
      'display_settings' => array(
        'label' => array(
          'format' => 'above',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'weight' => 0,
      ),
      'widget_active' => '1',
      'type' => 'text',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'text_processing' => 0,
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'widget' => array(
        'rows' => NULL,
        'size' => NULL,
        'label' => 'Telephone',
        'weight' => 0,
        'description' => '',
        'type' => 'text_textfield',
        'module' => 'text',
      ),
    ),
    'field_profile_url' => array(
      'field_name' => 'field_profile_url',
      'type_name' => 'profile',
      'display_settings' => array(
        'label' => array(
          'format' => 'above',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'weight' => 0,
      ),
      'widget_active' => '1',
      'type' => 'text',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'text_processing' => 0,
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'widget' => array(
        'rows' => NULL,
        'size' => NULL,
        'label' => 'URL',
        'weight' => '9',
        'description' => '',
        'type' => 'text_textfield',
        'module' => 'text',
      ),
    ),
    'field_profile_address' => array(
      'field_name' => 'field_profile_address',
      'type_name' => 'profile',
      'display_settings' => array(
        'label' => array(
          'format' => 'above',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'weight' => 0,
      ),
      'widget_active' => '1',
      'type' => 'text',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
        'format' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
          'views' => FALSE,
        ),
      ),
      'text_processing' => 1,
      'max_length' => '',
      'allowed_values' => '',
      'allowed_values_php' => '',
      'widget' => array(
        'rows' => NULL,
        'size' => NULL,
        'label' => 'Address',
        'weight' => '10',
        'description' => '',
        'type' => 'text_textarea',
        'module' => 'text',
      ),
    ),
    'field_invoice_status' => array(
      'field_name' => 'field_invoice_status',
      'type_name' => 'timetracker_invoice',
      'display_settings' => array(
        'label' => array(
          'format' => 'above',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'text',
      'required' => '1',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'text_processing' => '0',
      'max_length' => '',
      'allowed_values' => '0|unpaid
1|paid
2|rejected',
      'allowed_values_php' => '',
      'widget' => array(
        'default_value' => array(
          '0' => array(
            'value' => 'unpaid',
          ),
        ),
        'default_value_php' => NULL,
        'label' => 'Status',
        'weight' => '31',
        'description' => '',
        'type' => 'optionwidgets_select',
        'module' => 'optionwidgets',
      ),
    ),
    'field_duedate' => array(
      'field_name' => 'field_duedate',
      'type_name' => 'casetracker_basic_case',
      'display_settings' => array(
        'label' => array(
          'format' => 'above',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'default',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'date',
      'required' => '0',
      'multiple' => '0',
      'db_storage' => '1',
      'module' => 'date',
      'active' => '1',
      'locked' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'varchar',
          'length' => 20,
          'not null' => FALSE,
          'sortable' => TRUE,
          'views' => TRUE,
        ),
      ),
      'granularity' => array(
        'year' => 'year',
        'month' => 'month',
        'day' => 'day',
        'hour' => 'hour',
        'minute' => 'minute',
      ),
      'timezone_db' => 'UTC',
      'tz_handling' => 'site',
      'todate' => '',
      'repeat' => 0,
      'repeat_collapsed' => '',
      'default_format' => 'medium',
      'widget' => array(
        'default_value' => 'blank',
        'default_value_code' => '',
        'default_value2' => 'same',
        'default_value_code2' => '',
        'input_format' => 'm/d/Y',
        'input_format_custom' => '',
        'increment' => '1',
        'text_parts' => array(),
        'year_range' => '-1:+1',
        'label_position' => 'above',
        'label' => 'Deadline',
        'weight' => '-1',
        'description' => '',
        'type' => 'date_popup',
        'module' => 'date',
      ),
    ),
  );

  // Exported field: field_invoice_status
  $fields['timetracker_invoice-field_invoice_status'] = array(
    'field_name' => 'field_invoice_status',
    'type_name' => 'timetracker_invoice',
    'display_settings' => array(
      'label' => array(
        'format' => 'above',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '0|unpaid
1|paid
2|rejected',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => 'unpaid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Status',
      'weight' => '31',
      'description' => '',
      'type' => 'optionwidgets_select',
      'module' => 'optionwidgets',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Status');

  return $fields;
}
