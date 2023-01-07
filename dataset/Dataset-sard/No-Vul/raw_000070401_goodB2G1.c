static void FUN1()
{
    void * VAR1;
    VAR1 = NULL;
    if(1)
    {
        {
            wchar_t * VAR2 = (wchar_t *)malloc(50*sizeof(wchar_t));
            wmemset(VAR2, VAR3'', 50-1);
            VAR2[50-1] = VAR3'';
            
            VAR1 = (void *)VAR2;
        }
    }
    if(0)
    {
        
        FUN2("");
    }
    else
    {
        {
            
            size_t VAR4 = wcslen((wchar_t *)VAR1);
            void * VAR5 = (void *)calloc(VAR4+1, sizeof(wchar_t));
            memcpy(VAR5, VAR1, (VAR4+1)*sizeof(wchar_t));
            FUN3((wchar_t *)VAR5);
            free(VAR5);
        }
    }
}