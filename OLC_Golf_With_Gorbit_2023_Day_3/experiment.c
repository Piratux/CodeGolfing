// Attempt at improving 252 byte solution.
// Exploiting spiral symmetry by drawing squares.
// Problems:
// - Not clear how to calculate min and max ranges
// - Not clear how to calculate when spiral should be cutoff at the end

int main(){
    int N = 66;
    int minx = -5;
    int maxx = 5;
    int miny = -5;
    int maxy = 5;
    for(int y = miny; y <= maxy; y++){
        for(int x = minx; x <= maxx; x++){
            // Special case, diagonal from center to top left needs to be swapped from ' ' to '#' and vice versa
            if(x<0 && x+1==y){
                if(y%2==0){
                    putchar(' ');
                }
                else{
                    putchar('#');
                }
            }
            // Draw squares
            else if(max(abs(x), abs(y)) %2 == 0){
                putchar(' ');
            }
            else{
                putchar('#');
            }
        }
        putchar('\n');
    }
}