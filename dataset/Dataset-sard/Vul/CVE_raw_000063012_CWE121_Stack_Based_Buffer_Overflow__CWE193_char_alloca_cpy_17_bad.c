void FUN1()
{
    int VAR1;
    char * VAR2;
    char * VAR3 = (char *)FUN2((10)*sizeof(char));
    char * VAR4 = (char *)FUN2((10+1)*sizeof(char));
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        
        VAR2 = VAR3;
        VAR2[0] = ''; 
    }
    {
        char VAR5[10+1] = VAR6;
        
        strcpy(VAR2, VAR5);
        FUN3(VAR2);
    }
}