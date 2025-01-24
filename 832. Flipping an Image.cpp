class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int i = 0;

        while(i < n){
                reverse(image[i].begin() , image[i].end());
                 for(int j = 0 ; j < n ; j++){
                      if(image[i][j] == 1) image[i][j] = 0;
                      else if(image[i][j] == 0) image[i][j] = 1;
                 }
                i++;
        }
        
        return image;
    }
};
