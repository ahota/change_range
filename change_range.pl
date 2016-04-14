#!/usr/bin/env perl
use strict;
use warnings;
use feature qw(say);

#simple one-liner
sub change_range_minimal {
    return ($_[4]-$_[3])*($_[0]-$_[1])/($_[2]-$_[1])+$_[3];
}

#in case range is needed
sub change_range {
    my ($value, $oldMin, $oldMax, $newMin, $newMax) = @_;
    my $oldRange = $oldMax - $oldMin;
    my $newRange = $newMax - $newMin;
    return $newRange * ($value - $oldMin)/$oldRange + $newMin;
}

my ($oldMin, $oldMax, $newMin, $newMax) = (-5.0, 0.0, 0.0, 5.0);
for(my $v = $oldMin; $v < $oldMax; $v++) {
    say change_range($v, $oldMin, $oldMax, $newMin, $newMax);
}
