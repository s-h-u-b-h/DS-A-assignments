/* An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.
You are also given three integers sr, sc, and newColor. You should perform a flood fill on the image starting from the pixel image[sr][sc].
To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with newColor.
Return the modified image after performing the flood fill.*/

class Solution {
public:
    
        void search(vector<vector<int>>& image,int i,int j,int c,int nc,vector<vector<bool>>&visited){
            image[i][j]=nc;
            visited[i][j]=true;
            if(i>0 && image[i-1][j]==c && !visited[i-1][j])
                search(image,i-1,j,c,nc,visited);
            if((i+1)<image.size() && image[i+1][j]==c && !visited[i+1][j])
                search(image,i+1,j,c,nc,visited);
            if((j+1)<image[0].size() && image[i][j+1]==c && !visited[i][j+1])
                search(image,i,j+1,c,nc,visited);
            if(j>0 && image[i][j-1]==c && !visited[i][j-1])
                search(image,i,j-1,c,nc,visited);
         }
    
        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
           int color=image[sr][sc];
           vector< vector< bool > > visited( image.size(), vector<bool>(image[0].size(),false));
           search(image,sr,sc,color,newColor,visited);
           return image;
        }
};