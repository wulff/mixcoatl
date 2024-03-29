<?php
/**
 * @file
 * mixcoatl_content_message.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mixcoatl_content_message_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mixcoatl_content_message_node_info() {
  $items = array(
    'mixcoatl_message' => array(
      'name' => t('Message'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
