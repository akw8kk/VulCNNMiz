static void FUN1()
{
    char * VAR1;
    char * VAR2[5];
    VAR1 = (char *)malloc(100*sizeof(char));
    
    memset(VAR1, '', 50-1); 
    VAR1[50-1] = ''; 
    VAR2[2] = VAR1;
    FUN2(VAR2);
}