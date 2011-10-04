<?php
/**
 * @file
 * mixcoatl_content_group.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function mixcoatl_content_group_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'mixcoatl_group_full';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mixcoatl Group Full';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mixcoatl Group Teaser';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'mixcoatl_group';
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
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['id'] = 'field_mixcoatl_group_map';
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['table'] = 'field_data_field_mixcoatl_group_map';
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['field'] = 'field_mixcoatl_group_map';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';

  /* Display: Entity content: Full */
  $handler = $view->new_display('entity_view', 'Entity content: Full', 'entity_view_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Mixcoatl Group Full';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'mixcoatl_group_full';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'mixcoatl_group',
  );

  /* Display: Entity content: Teaser */
  $handler = $view->new_display('entity_view', 'Entity content: Teaser', 'entity_view_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'mixcoatl_group_teaser';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['entity_type'] = 'node';
  $handler->display->display_options['bundles'] = array(
    0 => 'mixcoatl_group',
  );

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Data overlay';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_mixcoatl_group_map',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => 'field_mixcoatl_group_address',
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
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['id'] = 'field_mixcoatl_group_map';
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['table'] = 'field_data_field_mixcoatl_group_map';
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['field'] = 'field_mixcoatl_group_map';
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['label'] = '';
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_mixcoatl_group_map']['field_api_classes'] = 0;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['id'] = 'field_mixcoatl_group_address';
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['table'] = 'field_data_field_mixcoatl_group_address';
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['field'] = 'field_mixcoatl_group_address';
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['label'] = '';
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  $handler->display->display_options['fields']['field_mixcoatl_group_address']['field_api_classes'] = 0;
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
  $translatables['mixcoatl_group_full'] = array(
    t('Master'),
    t('Mixcoatl Group Teaser'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Map'),
    t('All'),
    t('Entity content: Full'),
    t('Mixcoatl Group Full'),
    t('Entity content: Teaser'),
    t('OpenLayers Data Overlay'),
  );
  $export['mixcoatl_group_full'] = $view;

  return $export;
}
