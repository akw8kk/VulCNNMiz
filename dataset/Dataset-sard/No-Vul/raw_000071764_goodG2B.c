static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    
    VAR1 = (int *)malloc(100*sizeof(int));
    {
        int * VAR2 = VAR1;
        int * VAR1 = VAR2;
        {
            int VAR3[100] = {0}; 
            
            memmove(VAR1, VAR3, 100*sizeof(int));
            FUN2(VAR1[0]);
            free(VAR1);
        }
    }
}