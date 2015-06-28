<?php
/**
 * @file
 * Default parent output.
*/
?>
<div id="<?php print $settings['attributes']['id']; ?>" class="oridomi">
  <?php print theme('oridomi_list', array('items' => $items, 'settings' => $settings)); ?>
</div>
