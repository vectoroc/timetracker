<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function timetracker_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit timetracker
  $permissions['edit timetracker'] = array(
    'name' => 'edit timetracker',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  // Exported permission: view any timetracker
  $permissions['view any timetracker'] = array(
    'name' => 'view any timetracker',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: view own timetracker
  $permissions['view own timetracker'] = array(
    'name' => 'view own timetracker',
    'roles' => array(
      '0' => 'authenticated user',
    ),
  );

  return $permissions;
}
