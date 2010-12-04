<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function timetracker_invoice_user_default_permissions() {
  $permissions = array();

  // Exported permission: view any timetracker invoice
  $permissions['view any timetracker invoice'] = array(
    'name' => 'view any timetracker invoice',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  return $permissions;
}
