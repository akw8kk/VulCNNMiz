static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    VAR2 = 1; 
    VAR1 = FUN2(VAR1);
    {
        int VAR3[10] = {0};
        
        memcpy(VAR1, VAR3, 10*sizeof(int));
        FUN3(VAR1[0]);
        free(VAR1);
    }
}