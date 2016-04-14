//simple one-liner
function change_range_minimal(value, old_min, old_max, new_min, new_max) {
    return (new_max-new_min)*(value-old_min)/(old_max-old_min)+new_min;
}

//in case range is needed
function change_range(value, old_min, old_max, new_min, new_max) {
    var old_range = old_max - old_min;
    var new_range = new_max - new_min;
    return new_range * (value - old_min)/old_range + new_min;
}

var old_min = -5.0, old_max = 0.0,
    new_min =  0.0, new_max = 5.0;
for(var v = old_min; v < old_max; v += 0.1) {
    console.log(change_range(v, old_min, old_max, new_min, new_max).toFixed(2));
}
