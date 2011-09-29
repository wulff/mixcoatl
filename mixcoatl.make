; makefile for mixcoatl

; define core version and drush make compatibility

core = 7.x
api = 2

; modules

projects[addressfield][subdir] = contrib
projects[addressfield][version] = 1.0-beta2

projects[admin_menu][subdir] = contrib
projects[admin_menu][version] = 3.0-rc1

projects[advanced_help][subdir] = contrib
projects[advanced_help][version] = 1.0-beta1

projects[ctools][subdir] = contrib
projects[ctools][version] = 1.x-dev

projects[date][subdir] = contrib
projects[date][version] = 2.0-alpha4

;projects[defaultconfig][subdir] = contrib
;projects[defaultconfig][version] = 1.0-alpha2

projects[devel][subdir] = contrib
projects[devel][version] = 1.2

projects[entity][subdir] = contrib
projects[entity][version] = 1.0-beta10

projects[features][subdir] = contrib
projects[features][version] = 1.0-beta4

projects[field_group][subdir] = contrib
projects[field_group][version] = 1.0

projects[geofield][subdir] = contrib
projects[geofield][version] = 1.x-dev

projects[l10n_client][subdir] = contrib
projects[l10n_client][version] = 1.0

projects[l10n_update][subdir] = contrib
projects[l10n_update][version] = 1.0-beta2

projects[libraries][type] = module
projects[libraries][subdir] = contrib
projects[libraries][version] = 1.0

projects[og][subdir] = contrib
projects[og][version] = 1.1

projects[openlayers][subdir] = contrib
projects[openlayers][version] = 2.x-dev

projects[panels][subdir] = contrib
projects[panels][version] = 3.0-alpha3

projects[pathauto][subdir] = contrib
projects[pathauto][version] = 1.0-rc2

projects[references][subdir] = contrib
projects[references][version] = 2.0-beta3

projects[references_dialog][subdir] = contrib
projects[references_dialog][version] = 1.0-alpha1

;projects[rules][subdir] = contrib
;projects[rules][version] = 2.0-rc2

projects[strongarm][subdir] = contrib
projects[strongarm][version] = 2.0-beta2

projects[token][subdir] = contrib
projects[token][version] = 1.0-beta5

projects[views][subdir] = contrib
projects[views][version] = 3.x-dev

; themes

; libraries

;libraries[geophp][download][type] = get
;libraries[geophp][download][url] = http://cloud.github.com/downloads/phayes/geoPHP/geoPHP.tar.gz
;libraries[geophp][destination] = libraries
