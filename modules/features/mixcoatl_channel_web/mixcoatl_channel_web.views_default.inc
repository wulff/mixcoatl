<?php
/**
 * @file
 * mixcoatl_channel_web.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mixcoatl_channel_web_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'mixcoatl_area_with_stands';
  $view->description = '';
  $view->tag = 'mixcoatl';
  $view->base_table = 'node';
  $view->human_name = 'Area with stands';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Test';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Map */
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['id'] = 'field_mixcoatl_area_map';
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['table'] = 'field_data_field_mixcoatl_area_map';
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['field'] = 'field_mixcoatl_area_map';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mixcoatl_area' => 'mixcoatl_area',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'mixcoatl_area_stand_view';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'test';

  /* Display: Area */
  $handler = $view->new_display('openlayers', 'Area', 'openlayers_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_mixcoatl_area_map',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Map */
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['id'] = 'field_mixcoatl_area_map';
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['table'] = 'field_data_field_mixcoatl_area_map';
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['field'] = 'field_mixcoatl_area_map';
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_mixcoatl_area_map']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: Stands */
  $handler = $view->new_display('openlayers', 'Stands', 'openlayers_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_mixcoatl_stand_map',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Stands (field_mixcoatl_area_stand_ref) - reverse */
  $handler->display->display_options['relationships']['reverse_field_mixcoatl_area_stand_ref_node']['id'] = 'reverse_field_mixcoatl_area_stand_ref_node';
  $handler->display->display_options['relationships']['reverse_field_mixcoatl_area_stand_ref_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_mixcoatl_area_stand_ref_node']['field'] = 'reverse_field_mixcoatl_area_stand_ref_node';
  $handler->display->display_options['relationships']['reverse_field_mixcoatl_area_stand_ref_node']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Map */
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['id'] = 'field_mixcoatl_stand_map';
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['table'] = 'field_data_field_mixcoatl_stand_map';
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['field'] = 'field_mixcoatl_stand_map';
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_mixcoatl_stand_map']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_mixcoatl_area_stand_ref_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mixcoatl_stand' => 'mixcoatl_stand',
  );
  $translatables['test'] = array(
    t('Master'),
    t('Test'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Map'),
    t('All'),
    t('Page'),
    t('Area'),
    t('Stands'),
    t('field_mixcoatl_area_stand_ref'),
  );
  $export['mixcoatl_area_with_stands'] = $view;

  return $export;
}
