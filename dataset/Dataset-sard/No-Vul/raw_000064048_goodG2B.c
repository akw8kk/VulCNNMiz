static void FUN1()
{
    int VAR1;
    char * VAR2;
    char * VAR3 = (char *)FUN2(50*sizeof(char));
    char * VAR4 = (char *)FUN2(100*sizeof(char));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR4;
        VAR2[0] = ''; 
    }
    {
        char VAR5[100];
        memset(VAR5, '', 100-1); 
        VAR5[100-1] = ''; 
        
        FUN3(VAR2, 100, "", VAR5);
        FUN4(VAR2);
    }
}