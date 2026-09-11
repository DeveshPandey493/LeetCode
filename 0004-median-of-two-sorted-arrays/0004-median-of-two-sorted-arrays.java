class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int arr[] = new int[nums1.length + nums2.length];
        int idk = 0;

        for(int i = 0; i < nums1.length;i++){
            arr[idk++] = nums1[i];
        }
        for(int i = 0; i < nums2.length;i++){
            arr[idk++] = nums2[i];
        }
        Arrays.sort(arr);
        if(arr.length % 2 != 0){
            return arr[idk/2];
        }
        if(arr.length % 2 == 0){
            double c = arr[idk/2 -1] + arr[idk/2];
            return c/2;
        }
        return -1;
    }
}