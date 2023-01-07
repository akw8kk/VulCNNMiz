void FUN1()
{
    int VAR1;
    wchar_t * VAR2;
    VAR2 = NULL;
    for(VAR1 = 0; VAR1 < 1; VAR1++)
    {
        {
            wchar_t * VAR3 = (wchar_t *)malloc(100*sizeof(wchar_t));
            wmemset(VAR3, VAR4'', 100-1);
            VAR3[100-1] = VAR4'';
            
            VAR2 = VAR3 - 8;
        }
    }
    {
        wchar_t VAR5[100];
        wmemset(VAR5, VAR4'', 100-1); 
        VAR5[100-1] = VAR4''; 
        
        wcsncpy(VAR2, VAR5, 100-1);
        
        VAR2[100-1] = VAR4'';
        FUN2(VAR2);
        
    }
}