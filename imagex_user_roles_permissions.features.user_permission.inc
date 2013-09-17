<?php
/**
 * @file
 * imagex_user_roles_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function imagex_user_roles_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration pages.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Creator' => 'Content Creator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Manager' => 'Content Manager',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: cancel account.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'Administrator' => 'Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'user',
  );

  // Exported permission: change own username.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create directory content.
  $permissions['create directory content'] = array(
    'name' => 'create directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create event content.
  $permissions['create event content'] = array(
    'name' => 'create event content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'System Administrator' => 'System Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Creator' => 'Content Creator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'media',
  );


  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'System Administrator' => 'System Administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
