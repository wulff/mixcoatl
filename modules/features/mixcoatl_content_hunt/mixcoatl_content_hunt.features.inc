<?php
/**
 * @file
 * mixcoatl_content_hunt.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mixcoatl_content_hunt_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mixcoatl_content_hunt_node_info() {
  $items = array(
    'mixcoatl_hunt' => array(
      'name' => t('Hunt'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
