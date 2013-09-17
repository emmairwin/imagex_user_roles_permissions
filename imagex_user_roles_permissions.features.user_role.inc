<?php
/**
 * @file
 * imagex_user_roles_permissions.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function imagex_user_roles_permissions_user_default_roles() {
  $roles = array();

  // Exported role: Administrator.
  $roles['Administrator'] = array(
    'name' => 'Administrator',
    'weight' => 2,
  );

  // Exported role: Content Creator.
  $roles['Content Creator'] = array(
    'name' => 'Content Creator',
    'weight' => 5,
  );

  // Exported role: Content Manager.
  $roles['Content Manager'] = array(
    'name' => 'Content Manager',
    'weight' => 6,
  );

  // Exported role: Content Moderator.
  $roles['Content Moderator'] = array(
    'name' => 'Content Moderator',
    'weight' => 4,
  );

  // Exported role: System Administrator.
  $roles['System Administrator'] = array(
    'name' => 'System Administrator',
    'weight' => 7,
  );

  return $roles;
}
