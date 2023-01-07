void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(VAR2==5)
    {
        
        VAR1 = (wchar_t *)malloc(50*sizeof(wchar_t));
        VAR1[0] = VAR3''; 
    }
    {
        wchar_t VAR4[100];
        wmemset(VAR4, VAR3'', 100-1); 
        VAR4[100-1] = VAR3''; 
        
        wcsncat(VAR1, VAR4, 100);
        FUN2(VAR1);
        free(VAR1);
    }
}