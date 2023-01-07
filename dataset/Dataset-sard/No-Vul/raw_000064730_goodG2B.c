static void FUN1()
{
    int * VAR1;
    int VAR2[50];
    int VAR3[100];
    
    VAR1 = VAR3;
    {
        int * VAR4 = VAR1;
        int * VAR1 = VAR4;
        {
            int VAR5[100] = {0}; 
            
            memcpy(VAR1, VAR5, 100*sizeof(int));
            FUN2(VAR1[0]);
        }
    }
}