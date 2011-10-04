<?php
/**
 * @file
 * mixcoatl_content_group.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function mixcoatl_content_group_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass;
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'mixcoatl_group';
  $openlayers_maps->title = 'Mixcoatl Group Map';
  $openlayers_maps->description = 'A map used for adding location info to groups';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '10.986328124564, 55.677584409573',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'geofield_formatter',
        'point_zoom_level' => '12',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['mixcoatl_group'] = $openlayers_maps;

  $openlayers_maps = new stdClass;
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'mixcoatl_group_full';
  $openlayers_maps->title = 'Mixcoatl Group Map - Full node';
  $openlayers_maps->description = 'A map used for displaying the location of a group node';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '10.986328124564, 55.677584409573',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'mixcoatl_group_full_openlayers_1' => 'mixcoatl_group_full_openlayers_1',
          'geofield_formatter' => 0,
        ),
      ),
      'openlayers_behavior_panzoombar' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'mixcoatl_group_full_openlayers_1',
        'point_zoom_level' => '12',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'geofield_formatter' => 'geofield_formatter',
      'mixcoatl_group_full_openlayers_1' => 'mixcoatl_group_full_openlayers_1',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'mixcoatl_group_full_openlayers_1' => '0',
    ),
    'layer_styles' => array(
      'mixcoatl_group_full_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_activated' => array(
      'mixcoatl_group_full_openlayers_1' => 'mixcoatl_group_full_openlayers_1',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'mixcoatl_group_full_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['mixcoatl_group_full'] = $openlayers_maps;

  $openlayers_maps = new stdClass;
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'mixcoatl_group_teaser';
  $openlayers_maps->title = 'Mixcoatl Group Map - Teaser';
  $openlayers_maps->description = 'A map used for displaying the location of a group node';
  $openlayers_maps->data = array(
    'width' => '200px',
    'height' => '200px',
    'image_path' => '',
    'css_path' => '',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '10.986328124564, 55.677584409573',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_geofield' => array(),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => 'mixcoatl_group_full_openlayers_1',
        'point_zoom_level' => '12',
      ),
    ),
    'default_layer' => 'osm_mapnik',
    'layers' => array(
      'osm_mapnik' => 'osm_mapnik',
      'mixcoatl_group_full_openlayers_1' => 'mixcoatl_group_full_openlayers_1',
      'geofield_formatter' => 'geofield_formatter',
    ),
    'layer_weight' => array(
      'mixcoatl_group_full_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'mixcoatl_group_full_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'geofield_formatter' => 'geofield_formatter',
      'mixcoatl_group_full_openlayers_1' => 'mixcoatl_group_full_openlayers_1',
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'mixcoatl_group_full_openlayers_1' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['mixcoatl_group_teaser'] = $openlayers_maps;

  return $export;
}
