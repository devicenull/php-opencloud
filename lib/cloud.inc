<?php
/**
 * A convenience file that loads all the other components
 *
 * @copyright 2012-2013 Rackspace Hosting, Inc.
 * See COPYING for licensing information
 *
 * @package phpOpenCloud
 * @version 1.0
 * @author Glen Campbell <glen.campbell@rackspace.com>
 */

/**
 * This file is provided as a convenience in case you want to use multiple
 * cloud services. Instead of including each service file individually, this
 * file loads them all at once.
 *
 * Example:
 * <code>
 * require('cloud.inc');
 * </code>
 *
 * Since Rackspace is a subclass of OpenStack, you can use either class
 * for your connection object.
 */

require_once('rackspace.inc');
require_once('compute.inc');
require_once('objectstore.inc');
require_once('dbservice.inc');
