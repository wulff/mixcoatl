<?php
/**
 * @file
 * mixcoatl_channel_web.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mixcoatl_channel_web_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mixcoatl_channel_web_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}
