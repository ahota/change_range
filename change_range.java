class RangeChanger {
    //simple one-liner
    pubic float changeRangeMinimal(float value, float oldMin, float oldMax,
                                                float newMin, float newMax) {
        return (newMax-newMin)*(value-oldMin)/(oldMax-oldMin)+newMin;
    }

    //in case range is needed
    public float changeRange(float value, float oldMin, float oldMax,
                                          float newMin, float newMax) {
        float oldRange = oldMax - oldMin;
        float newRange = newMax - newMin;
        return newRange * (value - oldMin)/oldRange + newMin;
    }

    public static void main(String[] args) {
        float oldMin = -5.0f, oldMax = 0.0f,
              newMin =  0.0f, newMax = 5.0f;
        for(float v = oldMin; v < oldMax; v += 0.1) {
            float cr = changeRange(v, oldMin, oldMax, newMin, newMax);
            System.out.print(cr + " ");
        }
        System.out.println();
    }
}
