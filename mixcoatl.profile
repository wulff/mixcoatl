<?php
/**
 * @file
 * Install profile for the Mixcoatl distribution.
 */

/* --- HOOKS ---------------------------------------------------------------- */

/**
 * Implements hook_form_FORM_ID_alter().
 */
function mixcoatl_form_install_configure_form_alter(&$form, $form_state) {
  $form['site_information']['site_name']['#default_value'] = 'Mixcoatl';
  $form['site_information']['site_mail']['#default_value'] = 'mixcoatl@example.com';

  $form['admin_account']['account']['name']['#default_value'] = 'root';
  $form['admin_account']['account']['mail']['#default_value'] = 'mixcoatl@example.com';

  $form['server_settings']['site_default_country']['#default_value'] = 'DK';
  $form['server_settings']['date_default_timezone']['#default_value'] = 'Europe/Copenhagen';

  // disable automatic client timezone detection
  unset($form['server_settings']['date_default_timezone']['#attributes']);

  $form['update_notifications']['update_status_module']['#default_value'] = array(1);
}
