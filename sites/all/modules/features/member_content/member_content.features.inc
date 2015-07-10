<?php
/**
 * @file
 * member_content.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function member_content_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function member_content_node_info() {
  $items = array(
    'member_profile' => array(
      'name' => t('Member Profile'),
      'base' => 'node_content',
      'description' => t('Member profile'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
