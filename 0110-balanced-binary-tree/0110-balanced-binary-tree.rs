use std::cell::RefCell;
use std::rc::Rc;

impl Solution {
    fn depth(root: &Option<Rc<RefCell<TreeNode>>>) -> i32 {
        match root {
            None => 0,
            Some(node) => {
                let node_ref = node.borrow();
                let left = Self::depth(&node_ref.left);
                let right = Self::depth(&node_ref.right);

                if left == -1 || right == -1 || (left - right).abs() > 1 {
                    return -1;
                }

                1 + left.max(right)
            }
        }
    }

    pub fn is_balanced(root: Option<Rc<RefCell<TreeNode>>>) -> bool {
        Self::depth(&root) != -1
    }
}