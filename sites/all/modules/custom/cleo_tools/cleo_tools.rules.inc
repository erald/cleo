<?php
 /* Declare any meta data about actions for Rules
 */


function cleo_tools_user_logout($user) {
	global $user;
	session_destroy();
}


