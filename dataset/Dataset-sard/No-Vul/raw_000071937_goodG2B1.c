static void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    if(0)
    {
        
        FUN2("");
    }
    else
    {
        
        VAR1 = (wchar_t *)malloc(100*sizeof(wchar_t));
        VAR1[0] = VAR2''; 
    }
    {
        size_t VAR3;
        wchar_t VAR4[100];
        wmemset(VAR4, VAR2'', 100-1); 
        VAR4[100-1] = VAR2''; 
        
        for (VAR3 = 0; VAR3 < 100; VAR3++)
        {
            VAR1[VAR3] = VAR4[VAR3];
        }
        VAR1[100-1] = VAR2''; 
        FUN3(VAR1);
        free(VAR1);
    }
}