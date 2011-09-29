<?php
/**
 * @file
 * mixcoatl_content_area.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mixcoatl_content_area_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
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
function mixcoatl_content_area_node_info() {
  $items = array(
    'mixcoatl_area' => array(
      'name' => t('Area'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Type'),
      'help' => '',
    ),
  );
  return $items;
}