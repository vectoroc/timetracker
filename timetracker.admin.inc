<?php

function timetracker_admin_settings() {
  $form['timetracker_node_types'] = array(
    '#title' => t('Node Types'),
    '#type' => 'select',
    '#multiple' => true,
    '#options' => node_get_types('names'),
    '#description' => t('Select node types that will have timetracker feature'),
    '#default_value' => variable_get('timetracker_node_types', array()),
  );
  
  return system_settings_form($form);
}