void FUN1()
{
    int VAR1;
    char * VAR2;
    char VAR3[10];
    char VAR4[10+1];
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
        VAR2[0] = ''; 
    }
    {
        char VAR5[10+1] = VAR6;
        
        
        memmove(VAR2, VAR5, (strlen(VAR5) + 1) * sizeof(char));
        FUN2(VAR2);
    }
}