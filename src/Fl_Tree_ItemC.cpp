#include "Fl_Tree_ItemC.h"
#ifdef __cplusplus
EXPORT {
#endif
  FL_EXPORT_C(void,Fl_Tree_Item_Destroy)(fl_Tree_Item tree_item){
    delete (static_cast<Fl_Tree_Item*>(tree_item));
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_New_WithItem)(fl_Tree_Item copy_item){
    Fl_Tree_Item* tree_item = new Fl_Tree_Item((static_cast<Fl_Tree_Item*>(copy_item)));
    return (fl_Tree_Item)tree_item;
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_New_WithPrefs)(fl_Tree_Prefs tree_prefs){
    Fl_Tree_Item* tree_item = new Fl_Tree_Item((static_cast<Fl_Tree_Item*>(tree_prefs)));
    return (fl_Tree_Item)tree_item;
  }
  FL_EXPORT_C(int,Fl_Tree_Item_x)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->x();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_y)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->y();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_w)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->w();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_h)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->h();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_calc_item_height)(fl_Tree_Item tree_item,fl_Tree_Prefs prefs){
    return (static_cast<Fl_Tree_Item*>(tree_item))->calc_item_height(*(static_cast<Fl_Tree_Prefs*>(prefs)));
  }
  FL_EXPORT_C(void,Fl_Tree_Item_draw)(fl_Tree_Item tree_item,int X,int *Y,int W,fl_Widget tree,fl_Tree_Item itemfocus,fl_Tree_Prefs prefs){
    (static_cast<Fl_Tree_Item*>(tree_item))->draw(X,*Y,W,(static_cast<Fl_Widget*>(tree)),(static_cast<Fl_Tree_Item*>(itemfocus)),(*(static_cast<Fl_Tree_Prefs*>(prefs))));
  }
  FL_EXPORT_C(void,Fl_Tree_Item_draw_with_lastchild)(fl_Tree_Item tree_item,int X,int *Y,int W,fl_Widget tree,fl_Tree_Item itemfocus,fl_Tree_Prefs prefs){
    (static_cast<Fl_Tree_Item*>(tree_item))->draw(X,*Y,W,(static_cast<Fl_Widget*>(tree)),(static_cast<Fl_Tree_Item*>(itemfocus)),(*(static_cast<Fl_Tree_Prefs*>(prefs))));
  }
  FL_EXPORT_C(void,Fl_Tree_Item_show_self_with_indent)(fl_Tree_Item tree_item,char* indent){
    (static_cast<Fl_Tree_Item*>(tree_item))->show_self(indent);
  }
  FL_EXPORT_C(void,Fl_Tree_Item_show_self)(fl_Tree_Item tree_item){
    (static_cast<Fl_Tree_Item*>(tree_item))->show_self();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_set_label)(fl_Tree_Item tree_item,char* val){
    (static_cast<Fl_Tree_Item*>(tree_item))->label(val);
  }
  FL_EXPORT_C(const char*,Fl_Tree_Item_label)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->label();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_set_user_data)(fl_Tree_Item tree_item,void* data){
    (static_cast<Fl_Tree_Item*>(tree_item))->user_data(data);
  }
  FL_EXPORT_C(void*,Fl_Tree_Item_user_data)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->user_data();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_set_labelfont)(fl_Tree_Item tree_item,Fl_Font val){
    (static_cast<Fl_Tree_Item*>(tree_item))->labelfont(val);
  }
  FL_EXPORT_C(Fl_Font,Fl_Tree_Item_labelfont)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->labelfont();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_set_labelsize)(fl_Tree_Item tree_item,Fl_Fontsize val){
    (static_cast<Fl_Tree_Item*>(tree_item))->labelsize(val);
  }
  FL_EXPORT_C(Fl_Fontsize,Fl_Tree_Item_labelsize)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->labelsize();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_set_labelfgcolor)(fl_Tree_Item tree_item,Fl_Color val){
    (static_cast<Fl_Tree_Item*>(tree_item))->labelfgcolor(val);
  }
  FL_EXPORT_C(void,Fl_Tree_Item_set_labelcolor)(fl_Tree_Item tree_item,Fl_Color val){
    (static_cast<Fl_Tree_Item*>(tree_item))->labelcolor(val);
  }
  FL_EXPORT_C(Fl_Color,Fl_Tree_Item_labelcolor)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->labelcolor();
  }
  FL_EXPORT_C(Fl_Color,Fl_Tree_Item_labelfgcolor)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->labelfgcolor();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_set_labelbgcolor)(fl_Tree_Item tree_item,Fl_Color val){
    (static_cast<Fl_Tree_Item*>(tree_item))->labelbgcolor(val);
  }
  FL_EXPORT_C(Fl_Color,Fl_Tree_Item_labelbgcolor)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->labelbgcolor();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_set_widget)(fl_Tree_Item tree_item,fl_Widget val){
    (static_cast<Fl_Tree_Item*>(tree_item))->widget((static_cast<Fl_Widget*>(val)));
  }
  FL_EXPORT_C(fl_Widget,Fl_Tree_Item_widget)(fl_Tree_Item tree_item){
    return (fl_Widget)(static_cast<Fl_Tree_Item*>(tree_item))->widget();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_children)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->children();
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_child_by_index)(fl_Tree_Item tree_item,int index){
    return (fl_Tree_Item)(static_cast<Fl_Tree_Item*>(tree_item))->child(index);
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_child_by_t)(fl_Tree_Item tree_item,int t){
    return (fl_Tree_Item)(static_cast<Fl_Tree_Item*>(tree_item))->child(t);
  }
  FL_EXPORT_C(int,Fl_Tree_Item_has_children)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->has_children();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_find_child)(fl_Tree_Item tree_item,char* name){
    return (static_cast<Fl_Tree_Item*>(tree_item))->find_child(name);
  }
  FL_EXPORT_C(int,Fl_Tree_Item_find_child_by_item)(fl_Tree_Item tree_item,fl_Tree_Item item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->find_child((static_cast<Fl_Tree_Item*>(item)));
  }
  FL_EXPORT_C(int,Fl_Tree_Item_remove_child_by_item)(fl_Tree_Item tree_item,fl_Tree_Item item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->remove_child((static_cast<Fl_Tree_Item*>(item)));
  }
  FL_EXPORT_C(int,Fl_Tree_Item_remove_child)(fl_Tree_Item tree_item,char* new_label){
    return (static_cast<Fl_Tree_Item*>(tree_item))->remove_child(new_label);
  }
  FL_EXPORT_C(void,Fl_Tree_Item_clear_children)(fl_Tree_Item tree_item){
    (static_cast<Fl_Tree_Item*>(tree_item))->clear_children();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_swap_children)(fl_Tree_Item tree_item,int ax,int bx){
    (static_cast<Fl_Tree_Item*>(tree_item))->swap_children(ax,bx);
  }
  FL_EXPORT_C(int,Fl_Tree_Item_swap_children_by_tree_item)(fl_Tree_Item tree_item,fl_Tree_Item a,fl_Tree_Item b){
    return (static_cast<Fl_Tree_Item*>(tree_item))->swap_children((static_cast<Fl_Tree_Item*>(a)),(static_cast<Fl_Tree_Item*>(b)));
  }
  FL_EXPORT_C(int,Fl_Tree_Item_depth)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->depth();
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_parent)(fl_Tree_Item tree_item){
    return (fl_Tree_Item)(static_cast<Fl_Tree_Item*>(tree_item))->parent();
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_prev_displayed)(fl_Tree_Item tree_item,fl_Tree_Prefs prefs){
    return (fl_Tree_Item)(static_cast<Fl_Tree_Item*>(tree_item))->prev_displayed(*(static_cast<Fl_Tree_Prefs*>(prefs)));
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_next_displayed)(fl_Tree_Item tree_item,fl_Tree_Prefs prefs){
    return (fl_Tree_Item)(static_cast<Fl_Tree_Item*>(tree_item))->next_displayed(*(static_cast<Fl_Tree_Prefs*>(prefs)));
  }
  FL_EXPORT_C(void,Fl_Tree_Item_update_prev_next)(fl_Tree_Item tree_item,int index){
    return (static_cast<Fl_Tree_Item*>(tree_item))->update_prev_next(index);
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_prev_sibling)(fl_Tree_Item tree_item){
    return (fl_Tree_Item)(static_cast<Fl_Tree_Item*>(tree_item))->prev_sibling();
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_next_sibling)(fl_Tree_Item tree_item){
    return (fl_Tree_Item)(static_cast<Fl_Tree_Item*>(tree_item))->next_sibling();
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_next)(fl_Tree_Item tree_item){
    return (fl_Tree_Item)(static_cast<Fl_Tree_Item*>(tree_item))->next();
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_prev)(fl_Tree_Item tree_item){
    return (fl_Tree_Item)(static_cast<Fl_Tree_Item*>(tree_item))->prev();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_open_toggle)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->open_toggle();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_is_close)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->is_close();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_is_open)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->is_open();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_close)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->close();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_open)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->open();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_set_parent)(fl_Tree_Item tree_item,fl_Tree_Item val){
    return (static_cast<Fl_Tree_Item*>(tree_item))->parent((static_cast<Fl_Tree_Item*>(val)));
  }
  FL_EXPORT_C(int,Fl_Tree_Item_is_root)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->is_root();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_event_on_label)(fl_Tree_Item tree_item,fl_Tree_Prefs prefs){
    return (static_cast<Fl_Tree_Item*>(tree_item))->event_on_label(*(static_cast<Fl_Tree_Prefs*>(prefs)));
  }
  FL_EXPORT_C(int,Fl_Tree_Item_event_on_collapse_icon)(fl_Tree_Item tree_item,fl_Tree_Prefs prefs){
    return (static_cast<Fl_Tree_Item*>(tree_item))->event_on_collapse_icon(*(static_cast<Fl_Tree_Prefs*>(prefs)));
  }
  FL_EXPORT_C(fl_Tree_Item,Fl_Tree_Item_find_clicked)(fl_Tree_Item tree_item,fl_Tree_Prefs prefs){
    return (fl_Tree_Item)(static_cast<Fl_Tree_Item*>(tree_item))->find_clicked(*(static_cast<Fl_Tree_Prefs*>(prefs)));
  }
  FL_EXPORT_C(fl_Image,Fl_Tree_Item_usericon)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->usericon();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_set_usericon)(fl_Tree_Item tree_item,fl_Image val){
    return (static_cast<Fl_Tree_Item*>(tree_item))->usericon((static_cast<Fl_Image*>(val)));
  }
  FL_EXPORT_C(int,Fl_Tree_Item_visible_r)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->visible_r();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_is_visible)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->is_visible();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_visible)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->visible();
  }
  FL_EXPORT_C(char,Fl_Tree_Item_is_active)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->is_active();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_activate_with_val)(fl_Tree_Item tree_item,int val){
    return (static_cast<Fl_Tree_Item*>(tree_item))->activate(val);
  }
  FL_EXPORT_C(void,Fl_Tree_Item_activate)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->activate();
  }
  FL_EXPORT_C(char,Fl_Tree_Item_is_selected)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->is_selected();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_deselect_all)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->deselect_all();
  }
  FL_EXPORT_C(int,Fl_Tree_Item_select_all)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->select_all();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_select_toggle)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->select_toggle();
  }
  FL_EXPORT_C(void,Fl_Tree_Item_select_with_val)(fl_Tree_Item tree_item,int val){
    return (static_cast<Fl_Tree_Item*>(tree_item))->select(val);
  }
  FL_EXPORT_C(void,Fl_Tree_Item_select)(fl_Tree_Item tree_item){
    return (static_cast<Fl_Tree_Item*>(tree_item))->select();
  }
#ifdef __cplusplus
}
#endif