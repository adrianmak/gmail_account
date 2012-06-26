<?php

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

define("GMAILADDRESS", "yourmail@gmail.com");
define("GMAILPASSWORD", "gmailpassword");
define("FROMNAME", "yourname");


$gmail_account_info = array(
  "smtp_server_host" =>  "smtp.gmail.com",
  "smtp_server_port" => "465",
  "smtp_server_protocol" => "ssl",
  "smtp_auth_username" => GMAILADDRESS,
  "smtp_auth_password" => GMAILPASSWORD,
  "sent_from_email" => GMAILADDRESS,
  "sent_from_name" => FROMNAME,
);


