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
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access site in maintenance mode.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access site reports.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: access toolbar.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: access user profiles.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer actions.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer comments.
  $permissions['administer comments'] = array(
    'name' => 'administer comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
    ),
    'module' => 'comment',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer features.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: administer file types.
  $permissions['administer file types'] = array(
    'name' => 'administer file types',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer files.
  $permissions['administer files'] = array(
    'name' => 'administer files',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: administer meta tags.
  $permissions['administer meta tags'] = array(
    'name' => 'administer meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: administer modules.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer pathauto.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: administer permissions.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: administer rules.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(),
    'module' => 'rules',
  );

  // Exported permission: administer scheduler.
  $permissions['administer scheduler'] = array(
    'name' => 'administer scheduler',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: administer site configuration.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer software updates.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer taxonomy.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: administer themes.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: administer url aliases.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: administer users.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'user',
  );

  // Exported permission: administer views.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass rules access.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(),
    'module' => 'rules',
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
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: create directory content.
  $permissions['create directory content'] = array(
    'name' => 'create directory content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'node',
  );

  // Exported permission: create url aliases.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: delete any files.
  $permissions['delete any files'] = array(
    'name' => 'delete any files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any files.
  $permissions['edit any files'] = array(
    'name' => 'edit any files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: edit meta tags.
  $permissions['edit meta tags'] = array(
    'name' => 'edit meta tags',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
    ),
    'module' => 'metatag',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own files.
  $permissions['edit own files'] = array(
    'name' => 'edit own files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'media',
  );

  // Exported permission: manage features.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Creator' => 'Content Creator',
      'Content Manager' => 'Content Manager',
      'Content Moderator' => 'Content Moderator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: schedule (un)publishing of nodes.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'Content Manager' => 'Content Manager',
    ),
    'module' => 'scheduler',
  );

  // Exported permission: select account cancellation method.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'Administrator' => 'Administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: view files.
  $permissions['view files'] = array(
    'name' => 'view files',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'file_entity',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: view the administration theme.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Administrator' => 'Administrator',
      'Content Administrator' => 'Content Administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
