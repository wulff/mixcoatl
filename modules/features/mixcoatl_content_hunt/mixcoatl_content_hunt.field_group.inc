<?php
/**
 * @file
 * mixcoatl_content_hunt.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mixcoatl_content_hunt_field_group_info() {
  $export = array();

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mixcoatl_hunt_area|node|mixcoatl_hunt|form';
  $field_group->group_name = 'group_mixcoatl_hunt_area';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mixcoatl_hunt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Area',
    'weight' => '3',
    'children' => array(
      0 => 'field_mixcoatl_hunt_area_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Area',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mixcoatl_hunt_area|node|mixcoatl_hunt|form'] = $field_group;

  $field_group = new stdClass;
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mixcoatl_hunt_group|node|mixcoatl_hunt|form';
  $field_group->group_name = 'group_mixcoatl_hunt_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'mixcoatl_hunt';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Groups',
    'weight' => '4',
    'children' => array(
      0 => 'group_audience',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Groups',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_mixcoatl_hunt_group|node|mixcoatl_hunt|form'] = $field_group;

  return $export;
}
