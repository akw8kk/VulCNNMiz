void FUN1()
{
    wchar_t * VAR1;
    VAR1 = NULL;
    {
        wchar_t * VAR2 = (wchar_t *)malloc(100*sizeof(wchar_t));
        wmemset(VAR2, VAR3'', 100-1);
        VAR2[100-1] = VAR3'';
        
        VAR1 = VAR2 - 8;
    }
    {
        wchar_t * VAR4 = VAR1;
        wchar_t * VAR1 = VAR4;
        {
            wchar_t VAR5[100*2];
            wmemset(VAR5, VAR3'', 100*2-1); 
            VAR5[100*2-1] = VAR3''; 
            
            wcscpy(VAR5, VAR1);
            FUN2(VAR5);
            
        }
    }
}