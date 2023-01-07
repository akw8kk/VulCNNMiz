static void FUN1()
{
    int * VAR1;
    VAR1 = NULL;
    goto VAR2;
VAR2:
    
    VAR1 = (int *)FUN2(10*sizeof(int));
    {
        int VAR2[10] = {0};
        
        memcpy(VAR1, VAR2, 10*sizeof(int));
        FUN3(VAR1[0]);
    }
}