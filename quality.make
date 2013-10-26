core = 7.x
api = 2

projects[kw_manifests][type] = "module"
projects[kw_manifests][download][type] = "git"
projects[kw_manifests][download][url] = "git://github.com/kraftwagen/kw-manifests.git"
projects[kw_manifests][subdir] = "kraftwagen"

projects[kw_itemnames][type] = "module"
projects[kw_itemnames][download][type] = "git"
projects[kw_itemnames][download][url] = "git://github.com/kraftwagen/kw-itemnames.git"
projects[kw_itemnames][subdir] = "kraftwagen"

projects[kw_environment][type] = "module"
projects[kw_environment][download][type] = "git"
projects[kw_environment][download][url] = "git://github.com/kraftwagen/kw-environment.git"
projects[kw_environment][subdir] = "kraftwagen"

; Modules
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"

projects[context][type] = "module"
projects[context][subdir] = "contrib"

projects[phantomjs_capture][type] = "module"
projects[phantomjs_capture][subdir] = "contrib"

projects[phantomjs_capture][type] = "module"
projects[phantomjs_capture][subdir] = "contrib"

projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"

projects[date][type] = "module"
projects[date][subdir] = "contrib"

projects[devel][type] = "module"
projects[devel][subdir] = "contrib"

projects[features][type] = "module"
projects[features][subdir] = "contrib"

projects[advanced_help][type] = "module"
projects[advanced_help][subdir] = "contrib"

projects[backup_migrate][type] = "module"
projects[backup_migrate][subdir] = "contrib"

projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

projects[entity][type] = "module"
projects[entity][subdir] = "contrib"

projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"

projects[search_krumo][type] = "module"
projects[search_krumo][subdir] = "contrib"

projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"

projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"

projects[views][type] = "module"
projects[views][subdir] = "contrib"

projects[link][type] = "module"
projects[link][subdir] = "contrib"

; phantomcss
libraries[phantomcss][download][type]= "get"
libraries[phantomcss][download][url] = "https://github.com/Huddle/PhantomCSS/archive/master.zip"
libraries[phantomcss][directory_name] = "phantomcss"
libraries[phantomcss][destination] = "libraries"

; casperjs
libraries[casperjs][download][type]= "get"
libraries[casperjs][download][url] = "https://github.com/n1k0/casperjs/zipball/1.1-beta1"
libraries[casperjs][directory_name] = "casperjs"
libraries[casperjs][destination] = "libraries"

projects[bootstrap][type] = "theme"
projects[bootstrap][version] = "3.0-rc2"
